#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n,k;
    cin>>n>>k;
    long long x,a,b,c;
    cin>>x>>a>>b>>c;

    long long ans = 0;
    
    vector<long long>v(n);
    v[0] = x;
    for(int i=1;i<n;i++){
        v[i] = (1ll*v[i-1]*a+b) % c;
    }

    vector<long long>freq(n+1);
    int left = 0,right=k-1;

    while(right < n){
        freq[left]++;
        freq[right+1]--;

        left++;
        right++;
    }

    for(int i=1;i<n;i++) freq[i] += freq[i-1];

    // long long ans = 0;
    for(int i=0;i<n;i++){
        if(freq[i] %2) ans = ans^v[i];
    }

    cout<<ans<<endl;
    return 0;
}