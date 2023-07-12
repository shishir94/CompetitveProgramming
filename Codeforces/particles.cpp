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
    int n;
    cin>>n;
    long long arr[n];
    long long ans=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans = max(ans,arr[i]);
    }
    if(ans <=0){
        cout<<ans<<endl;
    }else{
        long long sum =0;
        for(int i=0;i<n;i+=2){
            if(arr[i] >=0){
                sum += arr[i];
            }
        }
        ans = max(ans,sum);
        sum=0;
        for(int i=1;i<n;i+=2){
            if(arr[i] >=0){
                sum += arr[i];
            }
            
        }
        ans = max(ans,sum);
        cout<<ans<<endl;
    }
}
return 0;
}