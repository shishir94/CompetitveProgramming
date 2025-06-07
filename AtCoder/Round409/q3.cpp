#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,l;
    cin>>n>>l;

    vector<long long>v(n-1);
    for(long long i=0;i<n-1;i++) cin>>v[i];

    map<long long,long long>mp;
    mp[0]=1;
    long long last = 0;
    for(long long i=0;i<n-1;i++){
        last = (last+v[i])%l;
        mp[last]++;
    }
    
    long long ans = 0;
    long long l1 = 0,l2 = (l1+l/3)%l,l3 = (l1 + 2*(l/3))%l;

    set<vector<long long>>st;
    if(l%3 != 0) cout<<0<<endl;
    else{
        while(l1 <= l && l2 <= l && l3 <= l){
            vector<long long>p = {l1,l2,l3};
            sort(p.begin(),p.end());
            if(st.find(p) == st.end()){
                ans += 1ll*mp[l1]*mp[l2]*mp[l3];
                st.insert(p);
                l1 = (l1+1)%l;
                l2 = (l2+1)%l;
                l3 = (l3+1)%l;
            }
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}