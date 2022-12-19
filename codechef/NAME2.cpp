#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s,x;
    cin>>s>>x;
    int y = s.size();
    int c = x.size();
    string f="",v="";
    if(y>=c){
        f = x;
        v =s;
    }else{
        f = s;
        v = x;
    }
    int i=0;
    int j =0;   
    while(i<f.size()&&j<v.size()){
        if(f[i]==v[j]){
            i++;
            j++;
        }else{
            j++;
        }
    }
    if(i==f.size()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}