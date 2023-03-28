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
    set<long long>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()==1||n==2){
        cout<<"-1"<<endl;
    }else{
        sort(arr,arr+n);
        vector<long long>v;
        
    }

}

return 0;

}