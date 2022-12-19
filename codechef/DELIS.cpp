#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long  n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    long long minl[n];
    long long minr[n];
    long long maxl[n];
    long long maxr[n];
    maxl[0]=arr[0];
    minl[0]=arr[0];
    for(int i=1;i<n;i++){
      minl[i]=min(arr[i],minl[i-1]+arr[i]);
      maxl[i]=max(arr[i],maxl[i-1]+arr[i]);
    }

    minr[n-1]=arr[n-1];
    maxr[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
      minr[i]=min(arr[i],minr[i+1]+arr[i]);
      maxr[i]=max(arr[i],maxr[i+1]+arr[i]);
    }

    long long ans = INT_MIN;
    for(int i=0;i<n-1;i++){
      ans = max(abs(maxl[i]-minr[i+1]),ans);
    }

    for(int i=0;i<n-1;i++){
      ans = max(abs(minl[i]-maxr[i+1]),ans);
    }

    cout<<ans<<endl;
}
return 0;
}