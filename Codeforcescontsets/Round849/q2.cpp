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
    int x=0;
    int y=0;
    bool p = false;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            y+=1;
        }
        if(s[i]=='D'){
            y=y-1;
        }
        if(s[i]=='R'){
            x+=1;
        }
        if(s[i]=='L'){
            x=x-1;
        }
        if(x==1&&y==1){
            p=true;
            break;
        }
    }
    if(p){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}