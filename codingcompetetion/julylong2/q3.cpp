#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n ,m;
    cin>>n>>m;
    if(m % n == 0){
        cout<<m<<" "<<n<<endl;
    }else{
        int t = n+(m%n);
        long long ans = 0;
        long long a = 0;
        long long b = 0;
       for(int i = n;i<=t;i++){
           int x = m-(m%i);
           int y = abs(x-i); 
           if( ans <= y){
               ans = y;
               a = i;
               b = x;
           }
       }
       cout<<a<<" "<<b<<endl;
    }
}
return 0;
}