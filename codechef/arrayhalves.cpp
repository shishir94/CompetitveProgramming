#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    vector<long long>v;
    vector<long long>l;
    for(int i=0;i<n;i++){
        if(arr[i]>n){
            v.push_back(i);
        }
    }
    for(int i=n;i<2*n;i++){
        if(arr[i]<=n){
            l.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    sort(l.begin(),l.end());
    long long sum = 0;
    for(int i=0;i<v.size();i++){
        sum += abs(v[i]-l[i]);
    }
    cout<<sum<<endl;
}
return 0;
}