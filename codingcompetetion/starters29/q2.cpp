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
    int arr[n];
    long long sum1 = 0;
    long long sum2 = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(i % 2 == 0){
            sum1 = sum1+abs(arr[i]);
        }else{
            sum2 = sum2 + abs(arr[i]);
        }
    }
    int ans1 = INT_MIN;
    int ans2 =  INT_MAX;
    for(int i = 0;i<n;i+=2){
         ans2 = min(ans2,abs(arr[i]));
    }
    for(int i = 1;i<n;i+=2){
        ans1 = max(ans1,abs(arr[i]));
    }
    /*cout<<ans1<<" "<<ans2<<endl;
    cout<<sum1<<" "<<sum2<<endl;
    */
   long long d = sum1 - sum2;
    sum1 = sum1 - abs(ans2)+abs(ans1);
    sum2 = sum2 - abs(ans1) + abs(ans2);
    long long e = sum1-sum2;
    long long x = max(d,e);
    cout<<x<<endl;
}
return 0;
}