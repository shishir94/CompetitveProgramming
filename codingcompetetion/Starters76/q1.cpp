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
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt++;
        }
    }
    if(cnt>=(n-cnt)){
        cout<<n-cnt<<endl;
    }else{
        cout<<cnt+1<<endl;
    }
}
return 0;
}