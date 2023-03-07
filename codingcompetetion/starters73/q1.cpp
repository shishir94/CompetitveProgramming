#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,y;
    cin>>n>>y;
    int arr[n];
    int f = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        f = f|arr[i];
    }
    // cout<<f<<endl;
    int x = y-f;
    // cout<<x<<endl;
    // cout<<(f|x)<<endl;
    if((f|x) == y){
        cout<<x<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
return 0;
}