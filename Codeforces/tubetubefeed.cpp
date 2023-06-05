#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        arr1[i]+=i;
    }
    int ans =-1;
    int ct=0;
    for(int i=0;i<n;i++){
        if(arr1[i]<=m){
            if(ct < arr2[i]){
                ct=arr2[i];
                ans=i;
            }
        }
    }
    if(ans == -1){
        cout<<-1<<endl;
    }else{
        cout<<ans+1<<endl;
    }
}
return 0;
}