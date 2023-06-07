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

bool valid(long long m,vector<long long>&v){
    vector<long long>temp;
    long long s = v[0]-m;
    temp.push_back(s);
    for(int i=1;i<v.size();i++){
        if(abs(s-v[i])>m){
            s=v[i]-m;
            temp.push_back(s);
        }
    }
    if(temp.size() <= 3){
        return true;
    }
    return false;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    long long  low=0;
    long long high = 1e9;
    long long ans =1e9;
    while(low<=high){
        long long mid = (low+high)/2;
        if(valid(mid,v)){
            ans=mid;
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
}
return 0;
}

