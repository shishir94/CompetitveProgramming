#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cnt =0;
    if((a-1)>0){
        cnt++;
    }
    if((a+1)<=n){
        cnt++;
    }
    if((b-1)>0){
        cnt++;
    }
    if((b+1)<=m){
        cnt++;
    }
    int cnt1=0;
    if((c-1)>0){
        cnt1++;
    }
    if((c+1)<=n){
        cnt1++;
    }
    if((d-1)>0){
        cnt1++;
    }
    if((d+1)<=m){
        cnt1++;
    }
cout<<min(cnt,cnt1)<<endl;
}
return 0;
}