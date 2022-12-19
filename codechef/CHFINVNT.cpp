#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n , p , k;
    cin>>n>>p>>k;
    long long ans = 0;
    long long r = (n-1) % k;
    long long s = p % k;
    if(s == 0){
        ans = ans + (p - s)/k + 1;
        cout<<ans<<endl;   
    }else if(s == 1){
        ans = ans + ((n-1) / k) + 1;
        ans = ans + (p - s)/k +1 ;
        cout<<ans<<endl;
    }else{
        if(r != k-1){
            if(r >= s){
                ans = ans + (p % k)*((n-1)/k +1);
                ans = ans + (p - s)/k + 1;
                cout<<ans<<endl;
            }else{
                ans = ans + ((n-1) % k+1)*((n-1)/k +1);
                ans = ans + ((n-1)/k)*(p%k-1-(n-1)%k);
                ans = ans + (p - s)/k + 1;
                cout<<ans<<endl;
            }
        }else{
            ans = ans + (p % k)*((n-1)/k +1);
            ans = ans + (p - s)/k + 1;
            cout<<ans<<endl;
        }
    }
}
return 0;
}
