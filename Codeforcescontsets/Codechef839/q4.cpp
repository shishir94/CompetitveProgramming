#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans = 0;
    for(int i =0;i<n;i++){
        if(arr[i]>arr[i+1]){
            long long h = (arr[i]+arr[i+1]+1)/2;
            ans = max(ans,h);
        }
    }
    bool p = true;
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-ans)>abs(arr[i+1]-ans)){
            p=false;
            break;
        }
    }
    // cout<<"jj: ";
    if(p){
        cout<<ans<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
return 0;
}