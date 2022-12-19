#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n; cin>>n;
    long long ans = INT_MAX;
    for(int i=0;i<30;i++){
        for(int j=i+1;j<=30;j++){
            long long x = (1<<i)+(1<<j);
            ans = min(ans,abs(n-x));
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}