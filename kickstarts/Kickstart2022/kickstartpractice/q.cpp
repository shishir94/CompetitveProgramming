#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int ii=1;ii<=t;ii++){
    cout<<"Case #"<<ii<<": ";
    int arr[26];
    for(int i=0;i<26;i++){
        cin>>arr[i];
    }
    map<char,int>mp;
    char x ='A';
    for(int i=0;i<26;i++){
        mp[x]=arr[i];
        x++;
    }
    int n;
    cin>>n;
    set<string>se;
    for(int i=0;i<n;i++){
        string d;
        cin>>d;
        string c="";
        for(int i=0;i<d.size();i++){
            c = c+to_string(mp[d[i]]);
        }
        se.insert(c);
    }
    if(se.size()==n){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}
