#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
    long long n;
    cin>>n;
    int arr[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            int x;
            cin>>x;
            arr[i][j]=x;
        }
    }
    long long v;
    if(arr[1][2]==0){
        v=4;
    }
    if(arr[1][2]==1||arr[1][2]==2){
        v=2;
    }
    for(int i=2;i<n;i++){
        if(arr[i][i+1]==0){
            v=v*2;
            v=v%998244353;
        }
    }
    cout<<v<<endl;
// }
return 0;
}