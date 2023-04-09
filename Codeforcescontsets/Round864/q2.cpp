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
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    long long cnt =0;
    // bool p = true;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[n-i-1][n-j-1]){
                cnt++;
            }
        }

    }
    // if(cnt >k){
    //     cout<<"NO"<<endl;
    // }else{
    //     int d = k-cnt;
    //     if(d==0){
    //         cout<<"YES"<<endl;
    //     }else{

    //     }
    // }
    if(n%2!=0){
        for(int p=0;p<n/2;p++){
            if(arr[n/2][n-1-p]!=arr[n/2][p]){
                cnt++;
            }
        }
    }
    if(k<cnt){
        cout<<"NO"<<endl;
    }else{
        int temp = k-cnt;
        if(n%2!=0||temp%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}