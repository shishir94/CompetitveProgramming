#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x;
    cin>>x;
    int n = x.size();
    int cnt = 0;
    int cnt1 = 0;
    if((x[n-1]-'0') % 2 ==0){
        for(int i = n-2;i>=0;i--){
            if((x[i]-'0') % 2 == 0){
                cnt++;
            }
        }
        if(cnt >= 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        for(int i = n-2;i>=0;i--){
            if((x[i]-'0') % 2 != 0){
                cnt++;
            }
        }
        if(cnt >= 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}