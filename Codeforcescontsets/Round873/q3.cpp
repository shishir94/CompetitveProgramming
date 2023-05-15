    // #include<iostream>
    // #include<bits/stdc++.h>
    // using namespace std;
     
    // int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     long long arr1[n];
    //     long long arr2[n];
    //     for(int i=0;i<n;i++){
    //         cin>>arr1[i];
    //     }
    //     for(int i=0;i<n;i++){
    //         cin>>arr2[i];
    //     }
    //     long long mod = 10000000007;
    //     sort(arr1,arr1+n);
    //     sort(arr2,arr2+n);
    //     vector<long long>v;
    //     for(int i=n-1;i>=0;i--){
    //         int cnt =0;
    //         for(int j=n-1;j>=0;j--){
    //             if(arr2[i]<arr1[j]){
    //                 cnt++;
    //                 // v.push_back(cnt);
    //             }else{
    //                 break;
    //             }
    //         }
    //         v.push_back(cnt);
    //     }
    //     long long ans =1;
    //     // for(int i=0;i<v.size();i++){
    //     //     cout<<v[i]<<" ";
    //     // }
    //     // cout<<endl;
    //     for(int i=0;i<v.size();i++){
    //         ans = ans*((v[i]-i)%mod);
    //         ans = ans %mod;
    //     }
    //     ans = ans%mod;
    //     cout<<ans<<endl;
        
    // }
    // return 0;
    // }

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
    long long arr1[n];
    long long arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    long long mod = 1000000007;
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    long long ans =1;
    for(int i=n-1;i>=0;i--){
        int cnt = upper_bound(arr1,arr1+n,arr2[i])-arr1;
        int cnt1 = n-i-1;
        // cnt =  n-cnt;
        ans = ans*(n-cnt-cnt1);
        ans = ans%mod;
    }
    ans = ans%mod;
    cout<<ans<<endl;
}
return 0;
}