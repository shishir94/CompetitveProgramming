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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    int sum = 0;
    while(i < n){
        int p = 1;
        while(arr[i] == arr[i+1]){
            p++;
            i++;
        }
        sum = sum + (p-1);
        i++;
    }
    int ans = n - sum;
    cout<<ans<<endl;
}
return 0;
}