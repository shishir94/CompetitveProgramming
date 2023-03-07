#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,c;
    cin>>n>>c;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>v;
    for(int i=0;i<n;i++){
        v.push_back(i+1+arr[i]);
    }
    sort(v.begin(),v.end());
    long long cnt=0;
    for(int i=0;i<v.size();i++){
        c=c-v[i];
        if(c>=0){
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}