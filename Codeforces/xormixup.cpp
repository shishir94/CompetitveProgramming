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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<n-1;i++){
        c=c^arr[i];
        if(c==arr[i+1]){
            break;
        }
    }
    cout<<c<<endl;
}
return 0;
}