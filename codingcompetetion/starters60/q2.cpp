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
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>v;
    int l = 0;
    for(int i =0;i<2*n;i++){
         if(arr[l] == i+1) l++;
	        else v.push_back(i+1);
    }
    long long sum1 = 0;
    long long sum2 = 0;
    for(int i = 0;i<k;i++){
        sum1 += max(0,(arr[n-1]-v[i]));
    }
    for(int i = 0;i<k-1;i++){
        sum2 += max(0,(2*n-v[i]));
    }
    cout<<max(sum1,sum2)<<endl;
}
return 0;
}