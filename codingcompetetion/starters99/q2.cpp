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
    int n ;
    cin>>n;
    int arr[n];
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<sum<<" ";
        sum = sum-arr[i];
    }
    cout<<endl;
}
return 0;
}