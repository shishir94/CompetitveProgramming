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
    if(n==1){
        cout<<"1"<<endl;
    }else if(n==2){
        cout<<"2 "<<1<<endl;
    }else{
        vector<int>p(n,0);
        p[0] =2;
        p[n-1] =3;
        p[n/2] = 1;
        int o = 4;
        for(int i=0;i<n;i++){
            if(p[i] == 0){
                p[i] =o;
                o++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}