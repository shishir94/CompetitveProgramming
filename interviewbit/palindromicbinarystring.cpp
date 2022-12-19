#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string fun(long long n){
    string s = "";
    while(n>0){
        int x = n % 2;
        n = n/2;
        s = s + to_string(x);
    }
    return s;
}


long long fun2(string s){
    long long sum = 0;
    for(int i=0;i<s.size();i++){
        sum+=pow(2,i)*(s[i]-'0');
    }
    return sum;
}


bool fun3(string s){
    int i = 0;
    int j = s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int A;
cin>>A;
vector<string>v;
for(int i=1;i<=pow(10,6);i++){
    string x = fun(i);
    v.push_back(x);
}
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
vector<string>l;
for(int i=0;i<v.size();i++){
    if(fun3(v[i])==true) {
        l.push_back(v[i]);
    }
}
//cout<<v[A-1]<<endl;
// for(int i=0;i<l.size();i++){
//     cout<<l[i]<<" ";
// }
// cout<<endl;
cout<<fun2(l[A-1])<<endl;
return 0;
}