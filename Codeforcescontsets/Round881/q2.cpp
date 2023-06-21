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
    long long n;
    cin>>n;
    long long arr[n];
    long long sum  =0;
    int cnt =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += abs(arr[i]);
    }
    int ans =0;
    int f =0;
    // vector<int>p;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                continue;
            }else if(arr[i]<0){
                f++;
            }else{
                if(f >0){
                    // p.push_back(f);
                    ans++;
                    f=0;
                }
            }
        }
        if(f>0){
            ans++;
        }
        cout<<sum<<" "<<ans<<endl;
}
return 0;
}