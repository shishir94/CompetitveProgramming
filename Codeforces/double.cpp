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
    string f = "";
    f = s;
    for(int i=s.size()-1;i>=0;i--){
        f = f+s[i];
    }
    cout<<f<<endl;
}
return 0;
}