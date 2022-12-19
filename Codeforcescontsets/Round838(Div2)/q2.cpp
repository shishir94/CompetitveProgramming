#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long ans(int n){
    int y= 1;
    while(y<=n){
        y=y*2;
    }
    return y;
}


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
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<ans(arr[i])-arr[i]<<endl;
    }
    
}
return 0;
}