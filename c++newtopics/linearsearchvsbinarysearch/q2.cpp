// Given an integer x find the square root of that number without using any inbuilt function.

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
    long long g = 0;
    if(x == 1){
        g =1;
    }else{
        int low = 0;
        int high = x-1;
        int mid = 0;
        int a =0;
        while(high >= low){
            mid = (low+high)/2;
            long long b = mid*mid;
            if(b == x){
                a = mid;
                break;
            }else if(mid*mid > x){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        long long j = a;
        if(j != 0){
            g = a;
        }else{
            if(mid*mid > x){
                g = mid-1;
            }else{
                g = mid;
            }
        }
    }
    cout<<g<<endl;
}
return 0;
}