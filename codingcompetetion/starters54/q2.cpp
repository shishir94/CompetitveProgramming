#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long factorial(int n,int k,int d){
    if(k > n-k){
        k = n-k;
    }
    vector<long long>arr(k+1,0);
    arr[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = min(i, k); j > 0; j--){
            arr[j] = (arr[j] + arr[j - 1]) % d;
        }
    }
    return arr[k];
}
long long ans(int r,int x,int d){
    long long h = 1;
    while(x>0){
        if(x%2==1){
            h = (h*r);
        }
        x = x>>1;
        r = r*r;

    }
    return h%d;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int d= 1000000007;
    string s;
    cin>>s;
    int r = 2;
    long long b = factorial(n,k,d);
    long long f = ans(r,b,d);
    cout<<f<<endl;
}
return 0;
}