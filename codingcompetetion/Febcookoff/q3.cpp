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
    vector<long long>arr;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        arr.push_back(x);
    }
    long long mn = arr[0]+arr[1]+arr[2];
    long long md = 3*arr[1];
    long long res = abs(mn-md);
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(i>0){
            md=3*arr[i];
        }
        for(int j=0;j<i;j++){
            mn=arr[i]+arr[j];
            int ans = md-mn;
            if(ans < arr[i]){
                continue;
            }else if(ans == arr[i]){
                res = min(res,abs(md-mn-arr[i+1]));
                continue;
            }
            int idx = lower_bound(arr.begin(),arr.end(),ans)-arr.begin();
            if(idx<=i || idx!=n){
                res = min(res,abs(arr[idx]+mn-md));
            }
            idx = idx-1;
            if(idx>i){
                res = min(res,abs(arr[idx]+mn-md));
            }
        }
    }
    cout<<res<<endl;
}
return 0;
}