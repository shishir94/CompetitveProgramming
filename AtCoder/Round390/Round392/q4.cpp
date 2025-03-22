#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// const int N = 3e5; 
int mod = 1000003;
int Solve(int N,vector<int>& A) { 
    int n = 3e5;
    vector<int>freq(n,0),pre(n,0);
    for (int i = 0; i < N; i++) { 
        freq[A[i]]++; 
    }
    for (int i = 1; i < n; i++) { 
        pre[i] = pre[i - 1] + freq[i]; 
    } 
    int ans = 0; 
    for (int i = 1; i <= n; i++) { 
        for (int j = i; j <= n; j += i) { 
            int X = (pre[j - 1] - pre[j - i - 1]); 
            ans = (ans% mod + (X * (j / i - 1) * freq[i])%mod)%mod;
        } 
    } 
    return ans;
} 

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
vector<int>v(N);
for(int i=0;i<N;i++) cin>>v[i];

cout<<Solve(N,v)<<endl;
return 0;
}