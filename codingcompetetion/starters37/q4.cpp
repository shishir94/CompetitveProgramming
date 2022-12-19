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
        if(arr[i] == 1 ){
            cnt++;
        }else{
            cnt1++;
        }
    }
    if(cnt >= cnt1){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }

}
return 0;
}