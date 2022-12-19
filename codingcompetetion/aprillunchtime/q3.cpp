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
    long long cnt = 0;
    long long cnt2 = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == 1){
            cnt++;
        }else if(arr[i] == 2){
            cnt2++;
        }
    }
   // cout<<cnt2<<endl;
    long long d = (n-cnt)*cnt;
    long long g ,h;
    if(cnt2 %2 == 0){
        g = cnt2/2;
        g = g*(cnt2-1);
    }else{
        g = (cnt2-1)/2;
        g = g*cnt2;
    }
    if(cnt % 2 == 0){
        h = cnt/2;
        h = h*(cnt-1);
    }else{
        h = (cnt-1)/2;
        h = h*cnt;
    }
   // cout<<d<<" "<<g<<" "<<h<<endl;
    long long ans = d+g+h;
    cout<<ans<<endl;
}
return 0;
}