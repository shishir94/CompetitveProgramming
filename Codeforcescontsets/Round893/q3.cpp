#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p)
{
 
long long res = 1;
while(y>0){
if(y%2==1){
res = (res*x)%p;
}
y = y>>1;
x = (x*x)%p;
}
return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    string f = "";
    string p = "";
    int n = s.size();
    for(int i=0;i<2*n;i++){
        if(i% 2 == 0){
            f += '(';
        }
        else{
            f+= ')';
        }
    }
    for(int i=0;i<n;i++){
        p += '(';
    }
    for(int i=n;i<2*n;i++){
        p += ')';
    }
    // cout<<f<<" "<<p<<endl;
    // cout<<endl;
    bool l = true;
    bool e = true;
    for(int i =0;i<=n;i++){
        string d = f.substr(i,n);
        // cout<<d<<endl;
        if(d == s ){
            l=false;
            break;
        }
    }
    // cout<<endl;
    bool k = true;
    for(int i =0;i<=n;i++){
        string e = p.substr(i,n);
        // cout<<e<<endl;
        if(e == s ){
            k=false;
            break;
        }
    }
    if(l == false && k == false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        if(l == true){
            cout<<f<<endl;
        }
        else{
            cout<<p<<endl;
        }
    }
}
return 0;
}