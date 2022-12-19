#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long a , b;
cin>>a;
while(a--){
    cin>>b;
    long long ans = 0;
    if(b % 2 == 0){
        for(int i = 2;i<=b;i+=2){
            ans = ans + i*i;
        }
        cout<<ans<<endl;
    }else{
        for(int i = 1;i<=b;i+=2){
            ans = ans + i*i;
        }
        cout<<ans<<endl;
    }
}
return 0;
}