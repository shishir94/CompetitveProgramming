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
    int arr1[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    int ans = 0;
    for(int i = 0;i<n-1;i++){
        ans = ans + sqrt(pow((arr[i]-arr[i+1]),2)+pow((arr1[i]-arr1[i+1]),2));
    }
    cout<<ans<<endl;
}
return 0;
}