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
    char arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    int l = 0;
    int r = n-1;
    int mid;
    int c = 0;
    int x;
    int ans;
    while(l<=r){
        mid  = (l+r)/2;
        if(arr[mid] == 't'){
            //cout<<"Target Found"<<endl;
            ans = mid;
            c = 1;
        }else{
            r = l -1;
        }
    }
    if(c == 0){
        cout<<"Target not found"<<endl;
    }else{
        cout<<"Target found at index "<<ans<<endl;
    }
}
return 0;
}