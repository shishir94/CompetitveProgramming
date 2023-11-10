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
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    int sum =0;
    for(int i=1;i<n;i++){
        sum += (arr[i]-arr[i-1]);
    }
    for(int i=n+1;i<2*n;i++){
        sum += (arr[i]-arr[i-1]);
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<arr[i+n]<<endl;
    }
}
return 0;
}