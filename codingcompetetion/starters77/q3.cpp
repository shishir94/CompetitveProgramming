#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k%2==0){
        if(n%2!=0){
            cout<<"YES"<<endl;
        }else{
            if(k==n){
                bool p = true;
                for(int i=0;i<n/2;i++){
                    if(arr[i]!=arr[n-i-1]){
                        p=false;
                        break;
                    }
                }
                if(p){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                bool o = true;
                int sum =0;
                for(int i=0;i<n/2;i++){
                    sum += abs(arr[i]-arr[n-i-1]);
                }
                if(sum%2==0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }else{
        if(n%2==0){
            cout<<"YES"<<endl;
        }else{
            if(k==n){
                bool p = true;
                for(int i=0;i<n/2;i++){
                    if(arr[i]!=arr[n-i-1]){
                        p=false;
                        break;
                    }
                }
                if(p){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
}
return 0;
}