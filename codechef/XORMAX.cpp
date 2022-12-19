#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x,v;
    cin>>x>>v;
    int g = x.size();
    int f = v.size();
    int a = 0;
    int b = 0;
    for(int i=0;i<g;i++){
        if(x[i]=='1'){
            a++;
        }else{
            b++;
        }
    }
    for(int i=0;i<f;i++){
        if(v[i]=='1'){
            a++;
        }else{
            b++;
        }
    }
    int ans = min(a,b);
    for(int i=0;i<ans;i++){
        cout<<"1";
    }
    for(int i=ans;i<f;i++){
        cout<<'0';
    }
    cout<<endl;
}
return 0;
}