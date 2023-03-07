#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            c++;
        }
    }
    if(x%2==0){
        if(c!=n){
            cout<<c<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }else{
        cout<<(c+1)/2<<endl;
    }
    
}
return 0;
}   