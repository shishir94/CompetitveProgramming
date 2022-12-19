#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool fun(char yy){
    char arr[5] = {'a','e','i','o','u'};
    int cnt = 0;
    bool t = true;
    for(int i = 0;i<5;i++){
        if(yy == arr[i]){
            t = true;
            break;
        }else{
            t = false;
        }
    }
    return t;
}
int cnt(char yy , char xx){
    int ans = 0;
    if(fun(yy)==fun(xx) && yy != xx){
        ans +=2;
    }else if(fun(yy)!=fun(xx)){
        ans+=1;
    }
    return ans;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    string s , p;
    cin>>s>>p;
    long long x = 0;
    for(int i = 0;i<n;i++){
        if(s[i] != '?' && p[i] != '?'){
            x+= cnt(s[i],p[i]);
            //cout<<fun(s[i])<<" "<<fun(p[i])<<endl;
        }
    }
    // cout<<x<<endl;
    vector<char>s1;
    for(int i = 0;i<n;i++){
        if(s[i] != '?' && p[i] == '?'){
            s1.push_back(s[i]);
        }else if(s[i] == '?' && p[i] != '?'){
             s1.push_back(p[i]);
        }
    }
    int c = s1.size();
    int cnt = 0;
    for(int i = 0;i<c;i++){
        if(fun(s1[i]) == true){
            cnt++;
        }
    }
    int f = (c-cnt);
    if(f >= cnt){
        x += cnt*2+f;
    }else{
        x+= f*2+cnt;
    }
    cout<<x<<endl;
}
return 0;
}