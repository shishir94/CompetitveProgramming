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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for(int i =0;i<n;i++){
        if(arr[i]==i+1){
            cnt1++;
        }
        if(arr[i]==n-i){
            cnt2++;
        }
        if(arr[i]!=i+1&&arr[i]!=n-i){
            cnt3++;
        }
    }
    if(cnt1>=cnt2+cnt3){
        cout<<"First"<<endl;
    }else if(cnt2>cnt1+cnt3){
        cout<<"Second"<<endl;
    }else{
        cout<<"Tie"<<endl;
    }
}
return 0;
}
