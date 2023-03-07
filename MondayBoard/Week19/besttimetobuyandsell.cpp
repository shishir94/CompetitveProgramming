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
    int fee;
    cin>>fee;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int hold = -prices[0];
    int empty = 0;
    for(int i=1;i<n;i++){
        hold = max(hold,empty-prices[i]);
        empty = max(empty,hold+prices[i]-fee);

    }
    cout<<empty<<endl;
}
return 0;
}