#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int B;
    cin>>B;
    int n;
    cin>>n;
    int arr[n];
    priority_queue<int>p;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p.push(arr[i]);
    }
    long long ans = 0;
    while(B--){
        long long x = p.top();
        ans+=(x%1000000007);
        p.pop();
        p.push(x/2);
    }
    cout<<(ans%1000000007)<<endl;
}
return 0;
}