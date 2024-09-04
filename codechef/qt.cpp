// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// bool valid(long long mid,vector<long long>& arr,long long m,long long l){
//     long long n = arr.size();
//     vector<long long>nums = arr;
//     long long op = 0;
//     long long temp = 0;
//     for(int i=0;i<n;i++){
//         if(nums[i] > mid){

//         }
//     }
//     return (op <= m)?true:false;
// }


// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
//     long long n;
//     cin>>n;

//     vector<long long>arr(n);
//     for(int i=0;i<n;i++) cin>>arr[i];

//     long long m,l;
//     cin>>m>>l;

//     long long low = *min_element(arr.begin(),arr.end())-m;
//     long long r = *max_element(arr.begin(),arr.end());
//     long long ans = -1;
//     while(low <= r){
//         long long mid = (low+r)/2;
//         if(valid(mid,arr,m,l)){
//             ans = mid;
//             r=mid-1;
//         }
//         else low = mid+1;
//     }
//     cout<<ans<<endl;
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int f(int ind,int s,vector<int>& arr){
	int mod = 1e9+7;
	if(ind == 0 && s==0)return 1;
	if(ind == 0)return(arr[0]==s);
	int nottake = f(ind-1,s,arr)%mod;
	int take = 0;
	if(arr[ind]<=s){
	    take = f(ind-1,s-arr[ind],arr)%mod;
	}
	return (take + nottake)%mod;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum;
    cin>>sum;

    cout<<f(n-1,sum,arr)<<endl;
    return 0;
}