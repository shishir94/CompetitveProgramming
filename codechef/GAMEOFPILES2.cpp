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
    int cnt  = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
        if(arr[i] == 1){
            cnt++;
        }
    }
    if(cnt > 1){
        sum = sum -n;
        if(sum%2==0){
            cout<<"CHEFINA"<<endl;
        }else{
            cout<<"CHEF"<<endl;
        }
}
return 0;
}