#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long catlan_number(int n){
    long long sum = 0;
    if(n==0){
        return 1;
    }else{
        for(int i = 0;i<n;i++){
            sum = sum+(catlan_number(i)*catlan_number(n-i-1));
        }
    }
    return sum;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<catlan_number(n)<<endl;
}
return 0;
}