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
    long long arr1[n],arr2[n];
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    sort(arr1,arr1+n);
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    sort(arr2,arr2+n);
    long long sum;
    long long ans = -1;
    for(int i = 0;i<n;i++){
        sum = arr1[i]+ arr2[n-1-i];
        ans = max(ans , sum);
    }
    cout<<ans<<endl;
}
return 0;
}