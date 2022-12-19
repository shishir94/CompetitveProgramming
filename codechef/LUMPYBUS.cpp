#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n , p , q;
    cin>>n>>p>>q;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
        long long money = p+q*2;
        long long sum = 0;
        long long cnt = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            if(sum <= money){
                cnt++;
            }else{
                break;
            }
        }
        cout<<cnt<<endl;
}
return 0;
}