#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m ;
    cin>>n>>m;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<=m){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }else{
        int cc = 2*m;
        if(n<cc){
            vector<long long>temp;
            // int r =0;
            for(int i=0;i<n-m;i++){
                // temp[r]=(arr[i]);
                temp.push_back(arr[i]);
                // r++;
            }
            for(int i=n-1;i>=m;i--){
                // temp[r]=arr[i];
                temp.push_back(arr[i]);
                // r++;
            }
            sort(temp.begin(),temp.end());
            for(int j=0;j<n-m;j++){
                cout<<temp[j]<<" ";
            }
            for(int i=n-m;i<m;i++){
                cout<<arr[i]<<" ";
            }
            for(int j=n-m;j<temp.size();j++){
                cout<<temp[j]<<" ";
            }
            cout<<endl;
        }else{
            sort(arr,arr+n);
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }


}
return 0;
}