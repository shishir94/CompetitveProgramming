#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,s,r;
    cin>>n>>s>>r;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=1;
    }
    int d = s-r;
    arr[0]=d;
    int g = r-n+1;
    for(int j=1;j<n;j++){
        arr[j]=arr[j]+min(d-1,g);
        g=g-min(d-1,g);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
return 0;
}