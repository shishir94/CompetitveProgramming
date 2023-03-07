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
    sort(arr,arr+n);
    vector<int>v;
    for(int i=0;i<n/2;i++){
        v.push_back(arr[i]);
        v.push_back(arr[n-i-1]);
    }
    if(n%2!=0){
        v.push_back(arr[n/2]);
    }
    bool p = false;
    for(int i=1;i<n-1;i++){
        if((v[i]>v[i-1]&&v[i]>v[i+1])||(v[i]<v[i-1]&&v[i]<v[i+1])){
            p=true;
        }else{
            p=false;
            break;
        }
    }
    if(!p){
        cout<<"NO"<<endl;
    }else{
        if((v[0]>v[n-1]&&v[0]>v[1]) || (v[0]<v[n-1]&&v[0]<v[1])){
            p=true;
        }else{
            p=false;
        }
        if((v[n-1]>v[n-2]&&v[n-1]>v[0]) || (v[n-1]<v[n-2]&&v[n-1]<v[0])){
            p=true;
        }else{
            p=false;
        }
        if(p){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}