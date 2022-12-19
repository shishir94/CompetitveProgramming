#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x;
    cin>>x;
    long long arr[x];
    int cnt = 0;
    bool t = false;
    for(int i = 0;i<x;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<x-1;i++){
        if(arr[i]>arr[i+1]){
            sum++;
            if(sum >= 2){
                t = false;
                break;
            }
        }   
    }
    //cout<<sum<<endl;
    //cout<<t<<endl;
    if(sum == 0){
        cout<<"YES"<<endl;
    }else if(sum == 1){
        int  a;
        int cnt1 = 0;
        for(int i = 0;i<x-1;i++){
            if(arr[i] > arr[i+1]){
                a = i;
            }
        }
        int c = arr[a];
        arr[a]=  arr[a+1];
        arr[a+1] = c;
        for(int i = 0;i<x;i++){
            if(arr[i]>arr[i+1]){
                cnt1++;
            }
        }
        //cout<<cnt1<<endl;
        if(cnt1 == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}