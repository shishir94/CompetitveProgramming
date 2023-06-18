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
    int cnt1 =0;
    int cnt2 =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == -1){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    int ans =0;
    int r=0;
    int a=0;
    int b =0;
    int x = -cnt1+cnt2;
    if(x < 0){
        a = (cnt1+cnt2+1)/2;
        b = (cnt1+cnt2)/2;
        r = cnt1 -b;
        cnt1 = b;        
    }
    if(cnt1 %2 != 0){
        ans++;
    }
    cout<<ans+r<<endl;
}
return 0;
}