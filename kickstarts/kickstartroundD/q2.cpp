#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int ii=1;ii<=t;ii++){
    cout<<"Case #"<<ii<<": ";
    long long n;
    cin>>n;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    long long k;
    cin>>k;
    long long m[k];
    for(int i = 0;i<k;i++){
        cin>>m[i];
    }
    long long arr1[n];
    for(int i = 0;i<n;i++){
        for(int j=0;j<k;j++){
            if(arr[i] == m[j]){
                arr1[i] = j;
            }
        }
    }
    long long sum = 0;
    for(int i = 0;i<n-1;i++){
        sum = sum + abs(arr1[i]-arr1[i+1]);
    }
    cout<<sum<<endl;
}
return 0;
}