#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,money;
    cin>>n>>money;
    vector<long long>a(n),b(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<long long , long long>>data;
    for(int i = 0;i<n;i++){
        long long e = a[i]-b[i];
        data.push_back({e,a[i]});
    }
    long long ans = 0;
    sort(data.begin(), data.end());
    for(auto itr : data){
        long long x = itr.first;
        long long y = itr.second;
        long long m = y - x;
        if (money < y){
            continue;
        }else{
            money -= y;
            ans+=1;

            ans += money/x;
            money%=x;
            money+=m;
        }
    }
    cout<<ans<<endl;
} 
return 0;
}