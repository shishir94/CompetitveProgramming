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
    int cnt =0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k = i;k<=j;k++){
                if((i-j+1)== arr[k]){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
return 0;
}