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
    string x = "";
    for(int i =0;i<n;i++){
        cin>>s;
        if(s[i] == '0'){
            x = x + '1';
        }else{
            x+='0';
        }
    }
    cout<<x<<endl;
}
return 0;
}