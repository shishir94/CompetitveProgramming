#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int arr[n];
    int sum = 0;
    int ans = INT_MIN;
    int ans1 = INT_MAX;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i] > ans){
            ans = arr[i];
        }
        if(ans1 > arr[i]){
            ans1 = arr[i];
        }
    }
    if(x >= ans1 && x <= ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
return 0;
}