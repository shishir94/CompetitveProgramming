#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int arr[3];
    for(int i = 0;i<=2;i++){
        cin>>arr[i];
    }
    int cnt = 0;
    for(int i = 0;i<=2;i++){
        if(arr[i]==0){
            cnt++;
        }
    }
   // cout<<cnt<<endl;
    if(cnt==3){
        cout<<"0"<<endl;
    }else if(cnt==2){
        cout<<"1"<<endl;
    }else if(cnt==1){
        int cnt1 = 0;
        for(int i = 0;i<=2;i++){
            if(arr[i]>1){
                cnt1++;
            }
        }
      //  cout<<cnt1<<endl;
        if(cnt1 == 2){
            cout<<"3"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }else{
        int cnt2 = 0;
        for(int i = 0;i<=2;i++){
            if(arr[i]==1){
                cnt2++;
            }
        }
        if(cnt2==3||cnt2==2){
            cout<<"3"<<endl;
        }else if(cnt2==1){
            cout<<"4"<<endl;
        }else{
            int cnt3 = 0;
            for(int i = 0;i<=2;i++){
                if(arr[i]==2){
                    cnt3++;
                }
            }
            if(cnt3==3){
                cout<<"4"<<endl;
            }else if(cnt3==1||cnt3==2){
                cout<<"5"<<endl;
            }else{
                cout<<"6"<<endl;
            }
        }
    }
}
return 0;
}