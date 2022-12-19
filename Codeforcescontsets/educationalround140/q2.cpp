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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]>arr[0]){
            // if((arr[0]+arr[i])%2==0){
            //     arr[0]=(arr[0]+arr[i])/2;
            // }
            arr[0]=(arr[0]+arr[i]+1)/2;
        }
    }
    cout<<arr[0]<<endl;
    
}
return 0;
}