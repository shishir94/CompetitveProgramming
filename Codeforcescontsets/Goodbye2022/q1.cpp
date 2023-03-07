#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    long long arr[n];
    long long arr1[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum = 0;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    multiset<long long>f;
    for(int i=0;i<n;i++){
        f.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        long long x = *(f.begin());
        f.insert(arr1[i]);
        f.erase(f.find(x));
    }
    for(auto itr=f.begin();itr!=f.end();itr++){
        sum+=*itr;
    }
    cout<<sum<<endl;
}
return 0;
}