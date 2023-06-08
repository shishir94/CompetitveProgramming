#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
    x=x%p;
    long long ans = 1;
    while(y>0){
        if(y&1){
            ans = (ans*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return ans;
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
    long long mod = 1000000007;
    long long even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd++;
        }else{
            even++;
        }
    }
    long long ans = modular_power(2,even,mod);
    if(odd == 0){
        ans = ans-1;
    }
    cout<<ans<<endl;

}
return 0;
}