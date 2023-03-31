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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr1[n];
    arr1[0]=arr[0];
    for(int i=1;i<n;i++){
        arr1[i]=arr[i]+arr1[i-1];
    }
    int x = arr1[n-1];
    while(m--){
        int l,r,k;
        cin>>l>>r>>k;
        int sum=0;
        if(l>=2){
            sum = -(arr1[r-1]-arr1[l-2])+(r-l+1)*k;
        }else{
            sum = -arr1[r-1]+(r-l+1)*k;
        }
        if((x+sum)%2==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
return 0;
}