#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    int b = (n+k-1)/k;
    bool f = true;
    int cnt = 0;
    for(int i=1;i<=m;i++){
        int a;
        cin>>a;
        if(a>b){
            f=false;

        }
        if(a==b){
            cnt++;
        }
    }
    if(f==false){
        cout<<"NO"<<endl;
    }else if(cnt > (n-1)%k+1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}