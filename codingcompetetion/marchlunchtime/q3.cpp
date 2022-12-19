#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<q;i++){
        int l,r;
        cin>>l>>r;
        long long ans = 0;
        for(int i = l-1;i<=r-1;i++){
            for(int j = i+1;j<=r-1;j++){
                long long x = gcd(arr[i],arr[j]);
                ans = max(ans,x);
            }
        }
        cout<<ans<<endl;
    }
}
return 0;
}