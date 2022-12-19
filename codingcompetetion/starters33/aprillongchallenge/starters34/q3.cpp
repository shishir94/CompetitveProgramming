#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            cnt1++;
        }else if(arr[i] < 0){
            cnt2++;
        }
    }
    long long d = 0;
    long long e = 0;
    if(cnt1 % 2 == 0){
        d = cnt1/2+d;
        d = d*(cnt1-1);
    }else{
        d = (cnt1-1)/2+d;
        d = d*cnt1;
    }
    if(cnt2 % 2 == 0){
        e = cnt2/2+e;
        e = e*(cnt2-1);
    }else{
        e = (cnt2-1)/2+e;
        e = e*cnt2;
    }
    long long x = d+e;
    cout<<x<<endl;
}    
return 0;
}