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
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum1=0;
    long long sum2=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            sum1+=arr[i];
        }else{
            sum2+=abs(arr[i]);
        }
    }
    cout<<abs(sum1-sum2)<<endl;
}
return 0;
}