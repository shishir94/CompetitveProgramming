#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        unsigned long long sum = 0;
        int arr[b];
        for(int i = 0 ;i < b;i++){
            cin>>arr[i];
        }
        sort(arr,arr+b);
        for(int i = 1 ;i <b;i++){
            sum = sum + arr[i];
        }
        sum = sum*arr[0];
        cout<<sum<<endl;
    }
    return 0;
}