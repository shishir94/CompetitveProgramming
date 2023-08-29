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
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    string s = "vika";
    int kl = 0;
    for(int i=0;i<m;i++){
        bool p = false;
        for(int j=0;j<n;j++){
            if(arr[j][i] == s[kl]){
                p=true;
                break;
            }
        }
        // cout<<p<<endl;
        if(p == true){
            kl++;
        }
    }
    if(kl == s.size()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}