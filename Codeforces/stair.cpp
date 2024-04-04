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
    int a,b,c;
    cin>>a>>b>>c;
    if((a<b && b<c) ){
        cout<<"STAIR"<<endl;
    }else if((a<b && b>c)){
        cout<<"PEAK"<<endl;
    }
    else{
        cout<<"NONE"<<endl;
    }
}
return 0;
}