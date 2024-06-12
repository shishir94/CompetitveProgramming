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

int get(int i,int n){
    int sum = 0;
    int t = 1;
    while(i*t<=n)
    {
        sum += i*t;
        t++;
    }

    return sum;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ans = 0;
    int ind =-1;
    for(int i=2;i<=n;i++)
    {
        int sum = get(i,n);
        if(ans <sum)
        {
            ans = sum;
            ind =i;
        }
    }
    cout<<ind<<endl;
}
return 0;
}