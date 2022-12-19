#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
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
    int g = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        g = gcd(g,arr[i]);
    }
    int h = 0;
    int c = 0;
    for(int i = 0;i<n;i++){
        h = gcd(h,arr[i]);
        if(h==g){
            c++;
            h = 0;
        }
    }
    if(c>=k){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}