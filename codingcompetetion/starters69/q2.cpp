#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    int cnt1 = 0;
    for(int i=0;i<2*n;i++){
        if(s[i]=='0'){
            cnt++;
        }else {
            cnt1++;
        }
    }
    vector<int>v;
    if(cnt1==0||cnt==0){
        v.push_back(-1);
    }else{
        if(cnt>=cnt1){
            int g = 0;
            for(int i=0;i<2*n;i++){
                if(s[i]=='0'){
                    v.push_back(i+1);
                    g++;
                    if(g==n){
                        break;
                    }
                }
            }
        }else{
            int k = 0;
            for(int i=0;i<2*n;i++){
                if(s[i]=='1'){
                    v.push_back(i+1);
                    k++;
                    if(k==n){
                       break;
                    }
                }
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}