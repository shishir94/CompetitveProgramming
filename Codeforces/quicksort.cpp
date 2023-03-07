#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d=1;
    for(int i=0;i<n;i++){
        if(arr[i]==d){
            d++;
        }

    }
    cout<<(n-d+k)/k<<endl;
}
return 0;
}