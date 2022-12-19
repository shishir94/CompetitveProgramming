#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    long long ans = INT_MAX;
    long long ans1 = INT_MIN;
    for(int i = 0;i<n;i++){
        int x = A[i] + i;
        if(ans > x){
            ans = x;
        }
        if(ans1 < x){
            ans1 = x;
        }
    }
    long long ans2 = INT_MAX;
    long long ans3 = INT_MIN;
    for(int i = 0;i<n;i++){
        int y = A[i] - i;
        if(ans2 > y){
            ans2 = y;
        }
        if(ans3 < y){
            ans3 = y;
        }
    }
    int h = ans1 - ans;
    long g = ans3 - ans2;
    if(h >=g){
        cout<<h<<endl;
    }else{
        cout<<g<<endl;
    }
}
return 0;
}