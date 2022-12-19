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
    long long sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    sum = sum/(n-1);
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans = -arr[i] + sum;
        cout<<ans<<" ";
    }
    cout<<endl;
}
return 0;
}