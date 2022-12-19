#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursion Solution::
int count(int b , int ar[],int a,int target ){
    if(b<0&&a==target){
        return 1;
    }else if(b<0){
        return 0;
    }
    int d = count(b-1,ar,a+ar[b],target);
    int e  = count(b-1,ar,a-ar[b],target);
    return d+e;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    cout<<count(n-1,arr,0,target)<<endl;
}
return 0;
}