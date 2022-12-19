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
    int arr[n-1];
    for(int i = 0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum = arr[0];
    int sum1 = arr[0];
    for(int i = 0;i<n-2;i++){
        sum = sum + arr[i];
        sum1 = sum1 + arr[i+1];
        if(sum1 > sum){
            sum = sum1;
        }
    }
    sum = sum + arr[n-2];
    cout<<sum<<endl;
}
return 0;
}