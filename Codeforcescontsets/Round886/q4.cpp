#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p)
{
 
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
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans =1;
    int cnt =1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i] <= k){
            cnt++;
        }
        else{
            ans = max(ans ,cnt);
            cnt=1;
        }
    }
    ans = max(ans,cnt);
    cout<<n-ans<<endl;
}
return 0;
}