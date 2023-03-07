#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long d = 1000000007;
    int n;
    cin>>n;
    long long sum=1;
    for(int i=1;i<=n;i++){
        sum  = (sum*(i%d))%d;
        sum = sum%d;
    }
    long long ans = ((n%d)*((n-1)%d))%d;
    sum = (sum%d)*(ans%d);
    sum = sum%d;
    cout<<sum<<endl;
}
return 0;
}