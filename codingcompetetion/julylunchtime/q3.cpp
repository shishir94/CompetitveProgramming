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
    long long arr1[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    sort(arr,arr+n);
    sort(arr1,arr1+n);
    long long ans = INT_MAX;
    if(n == 1){
        cout<<arr[0]+arr1[0]<<endl;
    }else if(n == 3){
        long long x = arr[1]+arr1[2];
        long long y = arr[2]+ arr1[1];
        cout<<min(x,y)<<endl;
    }else{
        for(int i = 0;i<n/2+1;i++){
            long long x = arr[n/2+i] + arr1[n-1-i];
            ans = min(ans,x);
        }
        cout<<ans<<endl;
    }
}
return 0;
}