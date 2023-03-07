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
    bool p = false;
    int cnt=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x==m){
           cnt++;
        }
        if(y==m){
           cnt1++;
        }
    }
    if(cnt1>0&&cnt>0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}