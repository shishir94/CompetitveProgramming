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
    int cnt = 0;
    int cnt1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L'){
            cnt++;
        }else{
            cnt1++;
        }
    }
    if(cnt==s.size()||cnt==0){
        cout<<"-1"<<endl;
    }else{
        bool f = true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='R'&&s[i+1]=='L'){
                f=false;
                break;
            }
        }
        if(!f){
            cout<<"0"<<endl;
        }else{
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='L'&&s[i+1]=='R'){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}
return 0;
}