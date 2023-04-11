#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string s,int ind, string out,vector<string>ans,vector<string>v){
    if(ind >=s.size()){
        ans.push_back(out);
        return;
    }
    int d = s[ind]-'0';
    string r = v[d];
    for(int i=0;i<r.size();i++){
        char c = r[i];
        out.push_back(c);
        solve(s,ind+1,out,ans,v);
        out.pop_back();
    }
 }




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    vector<string>v(10);
    v[0]="";
    v[1]="";
    v[2]="abc";v[3]="def";v[4]="ghi";v[5]="jkl";v[6]="mno";v[7]="pqrs";v[8]="tuv";v[9]="wxyz";
    vector<string>ans;
    solve(s,0,"",ans,v);
}
return 0;
}