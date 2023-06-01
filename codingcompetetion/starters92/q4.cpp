#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
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

bool fun(vector<long long>&v , long long m,long long k,int n){
    long long e = m*k;
    for(int i=0;i<n;i++){
        long long ans = min(min(v[i],m),e);
        e = e-ans;
        if(e==0){
            return true;
        }
    }
    return false;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    long long sum = 0;
    vector<long long>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    if(m==1){
        cout<<sum<<endl;
    }else{
        long long low=0;
        long long ans =0;
        long long high = sum;
        while(low<=high){
            long long mid = (low+high)/2;
            if(fun(v,mid,m,n)==true){
                ans = max(ans,mid);
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}
return 0;
}