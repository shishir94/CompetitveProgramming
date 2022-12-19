#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int e;
    cin>>e;
    for(int i = 0;i<e;i++){
        long long a[3];
        long long p = 1000000007;
        for(int i = 0;i<3;i++){
             cin>>a[i];
        }
        sort(a,a+3);
        long long ans=((((a[0])%p)*((a[1]-1)%p))%p*((a[2]-2)%p))%p;
        cout<<ans%p<<endl;
    }
    return 0;
}