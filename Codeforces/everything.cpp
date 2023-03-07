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
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum +=arr[i];
    }
    int r = sum;
    bool p = false;
    for(int i=0;i<n;i++){
        int d = (r-arr[i])%(n-1);
        if(d==0&&(r-arr[i])/(n-1)==arr[i]){
            p=true;
            break;
        }else{
            r =sum;
        }
    }
    if(p){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}