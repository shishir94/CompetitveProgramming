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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    long long sum = 0;
    long long ans = 0;
    while(i < n){
        int p = 1;
        while(i+1<n && arr[i] ==arr[i+1] && arr[i] == 1){
            p++;
            i++;
        }
      //  cout<<p<<endl;
        if(arr[i] == 1){
            if(p %2 == 0){
                ans = p/2;
                ans = ans*(p+1);
            }else{
                ans = (p+1)/2;
                ans = ans*p;
            }
        sum = sum + ans;
        }
        i++;
    }
    cout<<sum<<endl;
}
return 0;
}