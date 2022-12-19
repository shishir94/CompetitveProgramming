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
    string k = "";
    for(int i = 0;i<n/2;i++){
        if(s[i]=='0'&&s[n-i-1]=='0'){
            k ='0'+k+'0';
        }
        if(s[i]=='1'&&s[n-i-1]=='1'){
            k = '1'+k+'1';
        }
        if(s[i]=='0'&&s[n-i-1]=='1'){
            k = "10"+k;
        }
        if(s[i]=='1'&&s[n-i-1]=='0'){
            k = k+'1'+'0';
        }
       // cout<<k<<endl;
    }
    if(n%2!=0){
        if(s[n/2]=='0'){
            k = '0'+k;
        }else{
            k = k + '1';
        }
    }
    cout<<k<<endl;
}
return 0;
}