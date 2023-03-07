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
    long long sum1 = 0;
    long long cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            cnt++;
        }
    }
    if(cnt%2==0){
        for(int i=0;i<n;i++){
            sum1 = sum1+abs(arr[i]);
        }
        cout<<sum1<<endl;
    }else{
        long long sum2 = 0;
        long long ans1 = 1000000000;
        for(int i=0;i<n;i++){
            sum2 = sum2+abs(arr[i]);
            ans1 = min(ans1,abs(arr[i]));
        }
        sum2 = sum2-2*ans1;
        cout<<sum2<<endl;
    }

}
return 0;
}