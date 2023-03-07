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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    if(arr[0]==arr[n-1]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        v.push_back(arr[n-1]);
        for(int i=0;i<n-1;i++){
            v.push_back(arr[i]);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }   
        cout<<endl;
    }
}
return 0;
}