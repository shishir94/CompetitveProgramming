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
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='0'){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    if(cnt1%2!=0 && cnt2%2!=0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}