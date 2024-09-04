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
    int n;
    cin>>n;

    vector<vector<char>>v(n,vector<char>(4));
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>v[i][j];
        }
    }

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<4;j++){
            if(v[i][j] == '#'){
                cout<<j+1<<" ";
                break;
            }
        }
    }
    cout<<endl;
}
return 0;
}