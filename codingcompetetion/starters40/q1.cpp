#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long x = (n-1);
    int ans = x/5;
    if(x%5 == 0){
        cout<<ans*2<<endl;
    }else if(x%5==1||x%5==2||x%5==3){
        cout<<(ans*2+1)<<endl;
    }else{
        cout<<(ans*2+2)<<endl;
    }
}
return 0;
}