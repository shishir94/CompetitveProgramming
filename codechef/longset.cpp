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
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    unordered_map<int,int>mp;
    int sum = 0;
    int len = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
        if(sum ==1 ){
            len=max(len,i+1);
        }
        if(mp.find(sum)==mp.end()){
           mp[sum]=i;
        }
        if(mp.find(sum-1)!=mp.end()){
            len = max(len,i-mp[sum-1]);
        }
    }
    cout<<len<<endl;
}
return 0;
}


