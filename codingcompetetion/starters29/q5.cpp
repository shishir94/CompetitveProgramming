#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n , d;
    cin>>n>>d;
    int arr1[n],arr2[n];
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    long long ans = INT_MIN;
    for(int i = 0;i< n;i++){
        for(int j = i+1;j<n;j++){
            if(arr1[i] <= j+1){
                long long x = (arr2[i]^arr2[j]);
                long long e = (i+1)*(j+1)-d*x;
                ans = max(ans , e);
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}