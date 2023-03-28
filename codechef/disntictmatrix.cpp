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
    int cnt=0,cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }else{
            cnt1++;
        }
    }
    if(n%2!=0||cnt==0){
        cout<<"-1"<<endl;
    }else if(cnt1==0){
        if(n==2){
            cout<<"-1"<<endl;
        }else{
            if(n/2 %2==0){
                cout<<n/4<<endl;
            }else{
                int ans=2;
                ans = ans+(n/2-1)/2;
                cout<<ans<<endl;
            }   

        }
    }else if(cnt1>cnt){
        cout<<(n/2-cnt)<<endl;
    }else{
        if((n/2-cnt1)%2==0){
            cout<<(n/2-cnt1)/2<<endl;
        }else{
            int y = n/2-cnt1+1;
            cout<<1+y/2<<endl;
        }
    }
}
return 0;
}