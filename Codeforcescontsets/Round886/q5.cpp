#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 long long modular_power( long long x ,  long long y ,  long long p)
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
    long long n,m;
    cin>>n>>m;
    long long arr[n];
    long long sum =0;
    long long sumsq =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        sumsq += (arr[i]*arr[i]);
    }
    long long a = n;
    long long b = sum;
    long long c = (sumsq-m)/4;
    long long D = ((b*b)/(4*a*a) - (c/a));
    long long s1 = -b/(2*a) + sqrt(D);
    cout<<s1<<endl;
}
return 0;
}