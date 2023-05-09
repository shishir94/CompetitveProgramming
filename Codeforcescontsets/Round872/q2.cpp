#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    long long arr[n*m];
    long long ma = INT_MIN;
    long long mi = INT_MAX;
    for(int i=0;i<n*m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n*m);
    long long x = min(n,m)-1;
    long long y = n*m-x-1;
    long long r = arr[n*m-1]-arr[0];
    long long u = arr[n*m-2]-arr[0];
    long long h = arr[n*m-1]-arr[1];
    cout<<x*max(u,h)+y*r<<endl;

}
return 0;
}   