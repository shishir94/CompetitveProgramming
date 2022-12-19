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
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
        if(sum >= n){
            break;
        }else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}