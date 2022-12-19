#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,x;
    cin>>n>>x;
    long long arr[n];
    long long ans = INT_MAX;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(ans >arr[i]){
            ans = arr[i];
        }
    }
    if(x%ans == 0){
        long long d = x/ans;
        d = max(d,n);
        cout<<d<<endl;
    }else{
        long long s = x/ans;
        s = s+1;
        s = max(s,n);
        cout<<s<<endl;
    }

}
return 0;
}