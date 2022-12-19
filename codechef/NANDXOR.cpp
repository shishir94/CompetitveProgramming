#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int fun(int x){
    int cnt = 0;
    while(x != 0){
        int z = x%2;
        if(z == 1){
            cnt++;
        }
        x = x/2;
    }
    return cnt;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                for(int l = k+1;l<n;l++){
                    int x = (arr[i]^arr[j]);
                    int z = (arr[k]^arr[l]);
                    if(fun(x) == fun(z)){
                        cout<<i+1<<" "<<j+1<<" "<<k+1<<" "<<l+1<<endl;
                    }
                }
            }
        }
    }
}
return 0;
}