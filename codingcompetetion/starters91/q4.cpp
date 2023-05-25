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
    long long n,qw;
    cin>>n>>qw;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int arr1[n+1];
    for(int i=0;i<=n;i++){
        arr1[i]=0;
    }
    while(qw--){
        long long a,b;
        cin>>a>>b;
        arr1[a-1]+=1;
        arr1[b]-=1;
    }
    for(int i=1;i<=n;i++){
        arr1[i]+=arr1[i-1];
    }
    vector<pair<long long ,long long>>v1,v2;
    for(int i=0;i<n;i++){
        v1.push_back(make_pair(arr1[i],i));
    }
    sort(v1.rbegin(),v1.rend());
    long long temp =n-1;
    long long answer =0;
    for(int i=0;i<v1.size();i++){
        answer += (v1[i].first*arr[temp]);
        v2.push_back(make_pair(v1[i].second,arr[temp--]));
    }
    cout<<answer<<endl;
    sort(v2.begin(),v2.end());
    for(int i=0;i<v2.size();i++){
        cout<<v2[i].second<<" ";
    }
    cout<<endl;
}
return 0;
}