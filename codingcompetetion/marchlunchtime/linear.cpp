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
    int t;
    cin>>t;
    int arr[n];
    bool c = true;
    int p ;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    //sort(arr,arr+n);
    for(int i = 0;i<n;i++){
        if(arr[i] == t){
            p = i;
            c = false;
            break;
        }else{
            c = true;
        }
    }
    if(t == false){
        cout<<p<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    
}
return 0;
}