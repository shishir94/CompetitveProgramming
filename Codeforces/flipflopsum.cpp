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
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]&&arr[i]==-1){
            cnt1++;
        }else if(arr[i]!=arr[i+1]){
            cnt2++;
        }
    }
    if(cnt1!=0){
        cout<<sum+4<<endl;
    }else{
        if(cnt2!=0){
            cout<<sum<<endl;
        }else{
            cout<<sum-4<<endl;
        }
    }
}
return 0;
}