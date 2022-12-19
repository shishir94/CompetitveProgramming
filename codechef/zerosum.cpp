// Using Hash map
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
    unordered_map<int,int>hm;
    int sum = 0;
    int max_len = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        if(arr[i]==0 && max_len == 0){
            max_len = 1;
        }
        if(sum == 0){
            max_len = i+1;
        }
        if(hm.find(sum) != hm.end()){
            max_len = max(max_len, i - hm[sum]);
        }else{
            hm[sum] = i;
        }
    }
    cout<<max_len<<endl;
}
return 0;
}