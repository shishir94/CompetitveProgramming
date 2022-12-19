#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long x = (n*(n-1))/2;
    long long  y = n-1;
    long long c = k-x-y;
    if(c<=0){
        cout<<"-1"<<endl;
    }else{
        for(int i=0;i<y;i++){
            cout<<1<<" ";
        }
        cout<<c<<endl;
    }
}
return 0;
}