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
    bool t = true;
    for(int i = 0;i<30;i++){
        long long x = pow(2,i);
        long long cnt = 0;  
        for(int j = 0;j<n;j++){
            if(arr[j] / x >=1 && arr[j] /x < 2){
                cnt++;
            }
        }
        if(cnt > 1){
            t = true;
            break;
        }else{
            t = false;        
        }
    }
    if(t = true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}