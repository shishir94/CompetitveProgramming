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


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    map<long long,long long>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    bool p = true;
    if(arr[0] != 0){
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<"0"<<" ";
        }
        cout<<endl;
    }else{
        bool p = false;
        int cnt =0;
        int x=0;
        vector<long long>v;
        while(mp[0] != 0){
            x=0;
            for(auto itr=mp.begin();itr!=mp.end();itr++){
                if(itr->first == x && itr->second != 0){
                    x++;
                    mp[itr->first]--;
                }else{
                    break;
                }
            }
            v.push_back(x);
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second != 0){
                cnt += (itr->second);
            }

        }
        for(int i=0;i<cnt;i++){
            v.push_back(0);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}