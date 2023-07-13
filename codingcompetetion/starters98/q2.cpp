#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
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
    int arr[m];
    long long sum =0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    long long p = sum/n;
    long long q = sum%n;
    if(q == 0){
        if(p == m){
            cout<<n<<endl;
        }else{
            cout<<0<<endl;
        }
    }else{
        if((p+1) == m){
            cout<<q<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    
}
return 0;
}