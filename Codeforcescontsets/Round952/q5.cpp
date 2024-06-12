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
    long long x,y,z,k;
    cin>>x>>y>>z>>k;

    // set<vector<int>>v;
    long long ans  = 0;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            long long val = i*j;
            if(k % val == 0)
            {
                long long side3 = k/val;
                long long value = (x-i+1)*(y-j+1)*(z-side3+1);
                ans = max(ans,value);
                // int side3 = k/val;
                // if(side3 <= z)
                // {
                //     v.insert({i,j,side3});
                // }
            }
        }
    }
    cout<<ans<<endl;
    // for(auto itr=v.begin();itr!=v.end();itr++)
    // {
    //     vector<int>p = *itr;
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<p[j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<v.size()*8<<endl;
    
}
return 0;
}