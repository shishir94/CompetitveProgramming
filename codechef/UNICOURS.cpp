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
   // sort(arr, arr+n, greater<int>());
    //for(auto num: arr){
      //  cout<<num<<" ";
   // }
    cout<<n - *max_element(arr, arr+n)<<endl;
}
return 0;
}