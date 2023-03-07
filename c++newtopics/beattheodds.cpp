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
    long long arr[n];
    long long cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            cnt++;
        }
    }
    cout<<min(cnt,n-cnt)<<endl;
}
return 0;
}   