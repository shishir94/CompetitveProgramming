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
    vector<int>v;
    for(int i=0;i<n-1;i++){
        int c;
        cin>>c;
        v.push_back(c);
    }
    if(n==2){
        cout<<v[0]<<" "<<"0"<<endl;
    }else{
        int arr[n+1];
        arr[0]=v[0];
        arr[n-1]=v[n-2];
        for(int i=1;i<n-1;i++){
            arr[i]=min(v[i-1],v[i]);
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}