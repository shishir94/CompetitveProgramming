#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    long long arr[n];
    int j = 1;
    int h = n;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            arr[i]=j;
            j++;
        }else{
            arr[i]=h;
            h--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}