#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a ,b;
    cin>>a;
    for(int i = 0;i < a;i++){
        cin>>b;
        long long arr[b];
        for(int i = 0;i<b;i++){
            cin>>arr[i];
        }
        sort(arr,arr+b , greater<int>());
        long long sum = 0;
        for(int i = 0;i < b;i+=2){
            if( i % 2 == 0){
                sum = sum + arr[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}