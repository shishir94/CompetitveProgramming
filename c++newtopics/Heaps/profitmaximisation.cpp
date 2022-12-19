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
    int b;
    cin>>b;
    priority_queue<int>p;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p.push(arr[i]);
    }   
    int ans = 0;
    while(b--){
        int x = p.top();
        ans +=  x;
        p.pop();
        p.push(x-1);
    }
    cout<<ans<<endl;
}
return 0;
}