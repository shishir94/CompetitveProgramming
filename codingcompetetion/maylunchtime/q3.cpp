#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long cnt = 0;
    for (int i = 0;i<n;i++){
        if(arr[i] == arr[n-1]){
            cnt++;
        }
    }
        long long g = 2*arr[n-1];
        long long h = arr[n-1-cnt]-arr[n-1];
        //cout<<h<<endl;
        long long f;
        long long j =0;
        if(h == 0){
            f = 0;
        }
        else if(abs(h)<=m){
            f = m-abs(h);
        }
        else{
            j = abs(h)/m+j;
            f = abs(h+j*m);
        }
        long long k = arr[n-1]+arr[n-1-cnt]+f;
        long long ans = max(g,k);
        cout<<ans<<endl;
}
return 0;
}