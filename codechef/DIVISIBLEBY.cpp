#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=0;
    for(int i=0;i<n;i++){
        temp=gcd(temp,arr[i]);
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(temp==arr[i]){
            v.push_back(1);
        }else{
            v.push_back(arr[i]/temp);
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}