/*
Given an array with n objects with red white or blue colour sort them so that objects
of the same colour are adjacents with colour in the order red white or blue
0 - red , 1 - white , 2 - blue

Simple solution :: sort the array 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int st = 0;
    int e = n-1;
    int i = 0;
    while(i <= e){
        if(arr[i] == 0){
            swap(arr[i],arr[st]);
            st++;
        }else if(arr[i] == 2){
            swap(arr[i],arr[e]);
            e--;
            continue;
        }
        i++;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}