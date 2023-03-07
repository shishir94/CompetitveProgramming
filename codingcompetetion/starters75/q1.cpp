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
    string s;
    cin>>s;
    int cnt =0;
    long long sum =0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
    }
    if(n==1){
        cout<<"NO"<<endl;
    }else if(n==2){
        if(cnt==2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(cnt>3){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}