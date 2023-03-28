#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr1[n];
    long long arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(arr1[i]==1){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    bool p = true;
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            p=false;
            break;
        }
    }
    if(p){
        cout<<"YES"<<endl;
    }else{
        bool y = true;
        for(int i=0;i<n;i++){
            if(arr1[i]==1&&arr2[i]==0){
                y=false;
                break;
            }
        }
        if(!y){
            cout<<"NO"<<endl;
        }else{
            if(cnt1>0){
                if((arr1[n-1]==0&&arr2[n-1]==1)||(arr1[0]==0&&arr2[0]==1)){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}
return 0;
}