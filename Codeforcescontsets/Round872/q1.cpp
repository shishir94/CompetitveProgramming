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
    set<char>s1;
    for(int i=0;i<s.size();i++){
        s1.insert(s[i]);
    }
    if(s1.size()==1){
        cout<<"-1"<<endl;
    }else{
        cout<<s.size()-1<<endl;
    }
}
return 0;
}