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
    long long arr[n];
    int cnt =0;
    int cnt1 =0;
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2 ==0){
            cnt++;
            even.push_back(arr[i]);
        }else{
            cnt1++;
            odd.push_back(arr[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    if(cnt == n || cnt1 == n){
        cout<<"YES"<<endl;
    }else{
        if(even[0] < odd[0]){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

}
return 0;
}