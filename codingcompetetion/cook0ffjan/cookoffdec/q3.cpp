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
    int cnt = 0;
    for(int i = 1;i*i <= n-1;i++){
        if((n-1) % i == 0){
            cnt++;
        }    
    }
    int d = sqrt(n-1);
    if(d*d == (n-1)){
        cout<<2*cnt-1<<endl;
    }else{
        cout<<2*cnt<<endl;
    }
}
return 0;
}