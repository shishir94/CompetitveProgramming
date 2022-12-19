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
        if(arr[i] %2==0){
            arr[i]=0;
        }else{
            arr[i]=1;
        }
    }
    int b;
    cin>>b;
    int arr1[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        arr1[i] = sum;
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        if(arr1[i] == b){
            ans++;
        }
    }
    cout<<ans<<endl;
    
}
return 0;
}


