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
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
    }
    int cnt1=0;
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            if(cnt1%2!=0){
                cout<<"+";
            }else{
                cout<<"-";
            }
            cnt1++;
        }else{
            cout<<"+";
        }
    }
    cout<<endl;
}
return 0;
}