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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool t = true;
    for(int i = 0;i<n;i++){
        if(arr[i] != arr[i+1]){
            t = false;
        }else{
            t = true;
            break;
        }
    }
   // cout<<t<<endl;
    if(t == false){
        cout<<arr[n-1]<<endl;
    }else{   
        long long i = 0;
        long long e;
        long long d = 0;
        long long ans = INT_MIN;
        while(i < n){
            int p = 1;
            while(arr[i] == arr[i+1]){
                p++;
                i++;
            }
            e = arr[i];
            //cout<<e<<" "<<p<<endl;
            d = e+(p-1);
            //cout<<d<<" "<<e<<endl;
            if(d > ans){
                ans = d;
                //cout<<ans<<endl;
            }
            i++;
        }
        long long f = max(arr[n-1],ans);
        cout<<f<<endl;
    }    
}    
return 0;
}