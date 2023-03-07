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
    string s,w;
    cin>>s>>w;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
    }
    int cnt1=0;
    for(int i=0;i<m-1;i++){
        if(w[i]==w[i+1]){
            cnt1++;
        }
    }
    if(cnt+cnt1==0){
        cout<<"YES"<<endl;
    }else if(cnt1+cnt==1){
        if(s[n-1]!=w[m-1]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }

}
return 0;
}