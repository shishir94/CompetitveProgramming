#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,y;
    cin>>n>>y;
    if(n%2==0){
        long long ans = (y-n);
        if(ans%2==0){
            cout<<ans/2<<endl;
        }else{
            cout<<(ans/2)+1<<endl;
        }
    }else{
        int g=0;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                g=i;
                break;
            }
        }
        long long f = g+n;
        long long ans = (y-f);
        if(ans%2==0){
            cout<<1+(ans/2)<<endl;
        }else{
            cout<<(ans/2)+2<<endl;
        }
    }
}
return 0;
}