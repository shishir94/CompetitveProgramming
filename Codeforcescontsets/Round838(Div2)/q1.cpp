#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long fun(int n){
    int cnt2=0;
    while(n%2==0){
        cnt2++;
        n=n/2;
    }
    return cnt2;
}

long long fun2(int n){
    int cnt3=0;
    // cout<<n%2<<endl;
    while(n%2!=0){
        cnt3++;
        n=n/2;
    }
    return cnt3;
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
    int cnt = 0;
    int cnt1 = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            cnt++;
        }else{
            cnt1++;
        }
    }
    if(cnt1%2==0){
        cout<<"0"<<endl;
    }else{
        vector<long long>v;
        vector<long long>l;
        for(int i = 0;i<n;i++){
            for(int i=0;i<n;i++){
                if(arr[i]%2==0){
                    v.push_back(fun(arr[i]));
                }else{
                    v.push_back(fun2(arr[i]));
                }
            }
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
}
return 0;
}