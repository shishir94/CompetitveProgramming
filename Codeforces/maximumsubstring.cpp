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
    string s;
    cin>>s;
    long long cnt=0;
    long long cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }else{
            cnt1++;
        }
    }
    long long ans=0;
    long long v=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            v++;
        }else{
            ans = max(ans,v);
            v=0;
        }
    }
    ans = max(ans,v);
    long long ans1=0;
    long long v1 =0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            v1++;
        }else{
            ans1 = max(ans1,v1);
            v1=0;
        }
    }
    ans1 = max(ans1,v1);
    cout<<max(cnt*cnt1,max(ans*ans,ans1*ans1))<<endl;
}
return 0;
}