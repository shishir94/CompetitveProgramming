#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        long long sum = 0;
        int arr[b];
        for(int i =0; i <b;i++){
            cin>>arr[i];
            sum = sum+arr[i];
        }
        sort(arr , arr+b); 
        long long sum1 = 0;
        for(int i = 0;i<c;i++){
            sum1 = sum1 + arr[i];
        }
        long long d = abs(sum1-(sum - sum1));
        cout<<d<<endl;
    }
    return 0;
}