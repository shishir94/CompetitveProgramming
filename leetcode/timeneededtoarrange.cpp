#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt++;
        }

    }
    int a =0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            a=i;
            break;
        }
    }
    int b=0;
    for(int i=n-cnt;i<n;i++){
        if(s[i]!='0'){
            b=i;
            break;
        }
    }
    if(b!=0){
        cout<<b-a<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
return 0;
}   