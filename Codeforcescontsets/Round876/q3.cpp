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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[n-1]==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==0){
                cout<<"0"<<" ";
            }else{
                cnt++;
                if(i-1 < 0){
                    cout<<cnt<<" ";
                }else if(arr[i-1]==1){
                    cout<<"0 ";
                }else{
                    cout<<cnt<<" ";
                    cnt=0;
                }
            }
        }
        cout<<endl;
    }
}
return 0;
}