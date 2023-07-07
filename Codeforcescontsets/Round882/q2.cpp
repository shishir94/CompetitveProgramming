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
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans = arr[0];
    for(int i=1;i<n;i++){
        ans = ans&arr[i];
    }
    if(ans != 0){
        cout<<1<<endl;
    }else{
        long long cnt =0;
        long long p = arr[0];
        for(int i=1;i<n;i++){
            if(p != 0){
                p =p&arr[i];
            }else{
                p=arr[i];
                cnt++;
            }
            // cout<<i<<" "<<p<<endl;
        }
        if(p==0){
            cnt++;
        }
        cout<<cnt<<endl;
    }

}
return 0;
}