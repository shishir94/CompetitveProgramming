#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a,b,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        unsigned long long arr[b];
        for(int i = 0;i<b;i++){
            cin>>arr[i];
        }
        sort(arr,arr+b,greater< unsigned long long>());
        unsigned long long sum =0;
        unsigned long long e;
        for(int i = 0;i<b;i++){
            sum = sum+arr[i];
            if(sum >= c){
                 e = i;
                break;
            }
        }
        if(sum < c){
            cout<<"-1"<<endl;
        }else{
            cout<<e+1<<endl;
        }
    }
    return 0;
}