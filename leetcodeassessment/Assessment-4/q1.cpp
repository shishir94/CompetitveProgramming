#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int cnt =0;
    int n = s.size();
    string ans;
    for(int i=0;i<n;i++){
        if(s[i]!='-'){
            ans +=s[i];
        }
    }
    int m = ans.size();
    int x = m/k;
    int y = m%k;
    vector<char>v;
    for(int i=0;i<y;i++){
        v.push_back(ans[i]);
    }
    if(v.size()!=0){
        v.push_back('-');
    }
    int c =0;
    for(int i=y;i<ans.size();i++){
        v.push_back(ans[i]);
        c++;
        if(c == k){
            v.push_back('-');
            c=0;
        }
    }
    v.pop_back();
    string s1 ="";
    for(int i=0;i<v.size();i++){
        s1 +=v[i];
    }
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;
    
}
return 0;
}