#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int arr[4];
    for(int i=0;i<4;i++){
       cin>>arr[i];
    }
    int cnt = 0;
    for(int i=1;i<4;i++){
        if(arr[i]>arr[0]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}