#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p)
{
 
long long res = 1;
while(y>0){
if(y%2==1){
res = (res*x)%p;
}
y = y>>1;
x = (x*x)%p;
}
return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        a[i]=s;
    }

    vector<vector<int>>dp;
    for(int i=0;i<n;i++)
    {
        string p = a[i];
        for(int j=0;j<m;j++)
        {
            if(p[j] == '#') dp.push_back({i,j});
        }
    }

    int k = dp.size();
    int l = k/2;

    cout<<dp[l][0]+1<<" "<<dp[l][1]+1<<endl;
}
return 0;
}