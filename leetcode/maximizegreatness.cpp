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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0;
    int j=0;
    int cnt =0;
    while(j<n){
        if(arr[i] >= arr[j]){
            j++;
        }else{
            cnt++;
            i++;
            j++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}