#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int arr[2][2];
    int cnt=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }
    if(cnt==0){
        cout<<"0"<<endl;
    }else if(cnt ==4){
        cout<<"2"<<endl;
    }else{
        cout<<"1"<<endl;
    }
}
return 0;
}