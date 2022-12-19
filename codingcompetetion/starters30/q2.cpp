#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long sum = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
        if(sum > k){
            break;
        }
        cnt++;
    }
    if(cnt == n){
        cout<<cnt<<endl;
    }else{
        sum = sum - arr[cnt];
        long long x = k - sum;
        long long y = (arr[cnt]+1)/2;
        //cout<<sum<<" "<<x<<" "<<y<<endl;
        if(y <= x){
            cout<<cnt+1<<endl;
        }else{
            cout<<cnt<<endl;
        }
    }
}
return 0;
}