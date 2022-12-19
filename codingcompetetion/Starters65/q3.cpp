#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int fun(int p,int m){
//     if(p&(1<<(m))){
//         return 1;
//     }
//     return 0;
// }
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long arr1[n][64];
    for(int i=0;i<n;i++){
        for(int j=0;j<64;j++){
            if(arr[i] & (1 << j))
                arr1[i+1][j]++;
            arr1[i+1][j] += arr1[i][j];
        }
    }
    for(int i=0;i<q;i++){
        long long  k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        long long h = 0;
        if(l1>=1){
            h = arr1[r1][k]-arr1[l1-1][k];
        }else{
            h = arr1[r1][k];
        }
       // cout<<h<<endl;
        long long g = 0;
        if(l2>=1){
            g = arr1[r2][k]-arr1[l2-1][k];
        }else{
            g = arr1[r2][k];
        }
      //  cout<<g<<endl;
        long long w = (r1-l1+1)-h;
        long long u = (r2-l2+1)-g;
        // cout<<w<<endl;
        // cout<<u<<endl;
        long long ans = h*u+g*w;
        cout<<ans<<endl;
    }
}
return 0;
}