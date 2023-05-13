#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr;
    long long  sum =0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    long long pre[n];
    long long suf[n];
    long long rr=0,ll=0;
    for(int i=0;i<n;i++){
        rr+=arr[i];
        pre[i]=rr;
    }
    for(int i=0;i<n;i++){
        ll += arr[n-i-1];
        suf[i]=ll;
    }
    long long ans =sum-pre[2*k-1];
    long long s=0;
    for(int i=1;i<k;i++){
        s=sum-pre[2*(k-i)-1]-suf[i-1];
        ans = max(ans,s);
    }
    s = sum - suf[k-1];
    ans = max(s,ans);
    cout<<ans<<endl;

}
return 0;
}
