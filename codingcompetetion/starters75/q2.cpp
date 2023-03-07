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
    int i=0;
    int cnt=0;
    int h=-1;
    while(i<n){
        if(s[i]=='0'){
            h=i;
            break;
        }else{
            cnt++;
        }
        i++;
    }
    // cout<<cnt<<endl;
    // cout<<h<<endl;
    if(h==-1){
        cout<<cnt<<endl;
    }else{
        int curr=0;
        int l2=0;
        for(int i=h+1;i<n;i++){
            if(s[i]=='1'){
                curr++;
            }else{
                l2=max(l2,curr);
                curr=0;
            }
        }
        // cout<<l2<<endl;
        cout<<l2+cnt<<endl;
    }
}
return 0;
}