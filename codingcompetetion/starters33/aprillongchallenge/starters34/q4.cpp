#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    long long sum = n*x;
    if(n % 2 == 0){
        for(int i = 1;i<=n/2;i++){
            cout<<x+i<<" "<<x-i<<" ";
        }
        cout<<endl;
    }else{
        for(int i = 1;i<=(n-1)/2;i++){
            cout<<x-i<<" "<<x+i<<" ";
        }
        cout<<x<<endl;
    }
}
return 0;
}