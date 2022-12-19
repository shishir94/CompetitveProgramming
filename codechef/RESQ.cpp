#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    long long b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        int max = INT_MAX;
        for(int i = 1;i*i<=b;i++){
            int ans = 0;
            if(b%i==0){
                ans = ans + abs(i-b/i);
                if(ans<max){
                    max = ans;
                }
            }
        }
        cout<<max<<endl;
    }    
    return 0;
}