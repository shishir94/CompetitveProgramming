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
    int arr[n];
    int cnt = 0;
    int cnt1 = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == -1){
            cnt++;
        }else{
            cnt1++;
        }
    }
    if(abs(cnt-cnt1)<2){
        cout<<"Yes"<<endl;
    }else if(abs(cnt-cnt1) == 2){
        if(cnt % 2 == 0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }else{
        cout<<"No"<<endl;
    }
}
return 0;
}