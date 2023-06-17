#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string ans ="1";
    bool p = false;
    int x = arr[0];
    int y =-1;
    for(int i=1;i<n;i++){
        if(p== false && arr[i] >= x){
            x = arr[i];
            ans+='1';
        }else if(p == false && arr[i] <= arr[0]){
            p=true;
            y=arr[i];
            ans+='1';
        }else if(p== true){
            if(arr[i] >= y && arr[i] <= arr[0]){
                ans+='1';
                y=arr[i];
            }else{
                ans+='0';  
            }
        }else{
            ans+='0';
        }
    }
    cout<<ans<<endl;
}
return 0;
}