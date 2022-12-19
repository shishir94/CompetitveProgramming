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
    int ans = INT_MAX;
    int x = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(ans > arr[i]){
            ans = arr[i];
            x = i;
        }
    }
    int k;
    cin>>k;
    if(k == x){
        if(ans != 0){
            for(int i = x;i<n;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }else{
            for(int i = x+1;i<n;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
    }
}
return 0;
}