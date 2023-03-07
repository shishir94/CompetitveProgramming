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
    int coins;
    cin>>coins;
    int costs[n];
    for(int i=0;i<n;i++){
        cin>>costs[i];
    }
    sort(costs,costs+n);
    int cnt = 0;
    for(int i=0;i<n;i++){
        coins = coins-costs[i];
        if(coins>=0){
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}