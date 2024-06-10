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
    long long n;
    cin>>n;
    bool check = false;
    if(n%10 == 9){
        cout<<"NO"<<endl;
        continue;
    }
    n = n/10;
    while(n>0){
        if(n<10){
            if(n != 1){
                check = true;
                break;
            }
        }
        if(n%10 == 0){
            check = true;
            break;
        }
        n/=10;
    }
    cout<<(check ?"NO":"YES")<<endl;
}
return 0;
}