#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int arr1[2];
    int arr2[2];
    for(int i = 0;i<2;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<2;i++){
        cin>>arr2[i];
    }
    int cnt = 0;
    for(int i= 0;i<2;i++){
        for(int j = 0;j<2;j++){
            if(arr1[i] == arr2[j]){
                cnt++;
            }
        }
    }
    cout<<2-cnt<<endl;
}
return 0;
}