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
    string s,d;
    cin>>s>>d;
    int cnt = 0;
    int cnt1 = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
        if(d[i]=='1'){
            cnt1++;
        }
    }
    if(cnt1==cnt){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}