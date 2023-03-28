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
    int x;
    cin>>x;
    int sum=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        sum=sum^arr[i];
        v.push_back(sum);
    }
    int c =0;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            c++;
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int p = v[j]^v[i];
            if(x==p){
                c++;
            }
        }
    }
    cout<<c<<endl;
}
return 0;
}