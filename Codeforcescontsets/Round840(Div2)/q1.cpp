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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans = 0;
    for(int i=0;i<10;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(arr[j]&(1<<i)){
                cnt++;
            }
        }
        if(cnt<n&&cnt!=0){
            ans = ans+pow(2,i);
        }
    }
    cout<<ans<<endl;
}
return 0;
}