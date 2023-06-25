#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    long long sum=0,sum1=0;
    int arr[n];
    int arr1[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
        sum1 += arr1[i];
    }
    if(sum > sum1){
        cout<<"Tsondu"<<endl;
    }else if(sum == sum1){
        cout<<"Draw"<<endl;
    }else{
        cout<<"Tenzing"<<endl;
    }
}
return 0;
}