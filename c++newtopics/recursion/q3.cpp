#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count(int i,int arr[],int amount,int n){
    if(amount == 0 || i == n && amount ==0){
        return 0;
    }
    if(i==n && amount >0){
        return 100000;
    }else if(arr[i]>amount){
        return count(i+1,arr,amount,n);
    }else{
        return min(1+count(i,arr,amount-arr[i],n),count(i+1,arr,amount,n));
    }    
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int nums[n];
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    int amount;
    cin>>amount;
    cout<<count(0,nums,amount,n)<<endl;
}
return 0;
}
