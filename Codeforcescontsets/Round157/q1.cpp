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
    int x,y,k;
    cin>>x>>y>>k;
    if(x >y){
        cout<<x<<endl;
    }
    else if(x+k >= y){
        cout<<y<<endl;
    }
    else{
        cout<<x+k+2*(y-x-k)<<endl;
    }
}
return 0;
}