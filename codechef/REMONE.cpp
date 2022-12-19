#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long arr[n];
    long long arr1[n-1];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n-1;i++){
        cin>>arr1[i];
    }
    sort(arr,arr+n);
    long long x = arr[0];
    long long y = arr[1];
    sort(arr1,arr1+n-1);
    long long z = arr1[0];
    long long a = z-x;
    long long b = z-y;
    bool t = true;
    long long X = 10000000000;
    unordered_set<long long>s;
    for(int i = 0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i = 0;i<n-1;i++){
        if(s.find(arr1[i]-a) == s.end()){
            t = false;
            break;
        }
    }
    if(t && a >0){
        X = a;
    }
    t = true;
    for(int i = 0;i<n-1;i++){
        if(s.find(arr1[i]-b) == s.end()){
            t = false;
            break;
        }
    }
    if(t && b >0){
        X = min(X,b);
    }
    cout<<X<<endl;
}
return 0;
}