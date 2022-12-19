#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t,n;
cin>>t;
while(t--){
    cin>>n;
    long long ans = power(2 , n-1 , 1000000007);
    cout<<ans<<endl;
}
return 0;
}