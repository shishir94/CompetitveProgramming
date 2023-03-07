#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    long long ar1[n];
    for(int i = 0;i<<n;i++){
        ar1[i] = 2*arr[i];
    }
    sort(ar1,ar1+n,greater<int>());
    for(int i = 0;i<n;i++){
        bool b = true;
        long long x = 0;
        for(int j = 0;j<n;j++){
            if(arr[i]-ar1[j] > 0){
                x = ar1[j]/2;
              //  cout<<x<<" ";
                b = true;
                break;
            }else{
                b = false;
            }
        }
      //  cout<<x<<" ";
        if(b == false){
            cout<<"-1"<<" ";
        }else{
            cout<<x<<" ";
        }
    }
    cout<<endl;
}
return 0;
}