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
    int sum = 0;
    for(int i = 0;i<n;i++ ){
        cin>>arr[i];
        sum =sum+arr[i];
    }
    int d = sum-n/2;
    if(d % n == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}