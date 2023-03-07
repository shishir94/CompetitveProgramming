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
    int prices[n];
    for(int i =0;i<n;i++){
        cin>>prices[i];
    }
    int i=0;
    int buystock=0;
    int profit=0;
    int sellstock=0;
    while(i<n-1){
        while(i<n-1 && prices[i+1]<=prices[i]){
            i++;
        }
        buystock=prices[i];
        while(i<n-1 && prices[i+1]>=prices[i]){
            i++;
        }
        sellstock=prices[i];
        profit+=sellstock-buystock;
    }
    cout<<profit<<endl;
}
return 0;
}