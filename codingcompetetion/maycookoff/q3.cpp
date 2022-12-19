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
    long long arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool t = true;
    for(int i = 1;i<n-1;i++){
        if(((arr[i]-arr[i-1]) == 2*(arr[i+1]-arr[i]))||(2*(arr[i]-arr[i-1]) == (arr[i+1]-arr[i]))){
            t = false;
        }else{
            t = true;
            break;
        }
    }
    if(t == false){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
}
return 0;
}