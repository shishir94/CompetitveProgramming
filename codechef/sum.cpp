// Given an array and an integer b find whether there exists a sunaaray whose sum is b.
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
    int i = 0;
    int j = 1;
    int b;
    cin>>b;
    int sum = arr[0];
    bool t = false;
    int a = 0;
    int v = 0;
    while(j < n && i < n){
        if(sum == b){
            t = true;
            break;
        }else if(sum < b){
            sum += arr[j];
            a = j;
            j++;
        }else{
            sum -= arr[i];
            i++;
            v = i;
        }
    }
    if(t){
        cout<<"YES"<<endl;
        cout<<a<<" "<<v<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
return 0;
}