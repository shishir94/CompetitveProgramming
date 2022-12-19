#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binary(long long n){
    string s  = " ";
    while(n){
        int x = n%2;
        n = n/2;
        s = s + to_string(x);
    }
    int v = s.size();
    long long cnt = 0;
    for(int i = 0;i<v;i++){
        if(s[i] == '1'){
            cnt++;
        }
    }
    if(cnt%2==0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<int>sp;
    for(int i = 0;i<pow(2,11);i++){
        if(binary(i)== 0){
            sp.push_back(i);
        }
    }
    for(int i = 0;i<sp.size();i++){
        cout<<sp[i]<<" ";
    }
    cout<<endl;
}
return 0;
}