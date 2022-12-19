#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i] % a == 0){
            cnt1++;
        }
        if(arr[i] % b == 0){
            cnt2++;
        }
        if((arr[i] % a == 0 )&& (arr[i] % b == 0)){
            cnt3++;
        }
    }
    if(a == b){
        if(cnt1 == 0){
            cout<<"ALICE"<<endl;
        }else{
            cout<<"BOB"<<endl;
        }
    }else{
        if(cnt1 > cnt2){
            cout<<"BOB"<<endl;
        }else if(cnt1 == cnt2){
            if(cnt3 >= 1){
                cout<<"BOB"<<endl;
            }else{
                cout<<"ALICE"<<endl;
            }
        }else{
            cout<<"ALICE"<<endl;
            }
    }
    
}
return 0;
}