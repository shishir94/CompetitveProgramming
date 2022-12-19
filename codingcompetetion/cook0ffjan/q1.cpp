#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n ,a;
    cin>>n>>a;
    int d = n-a;
    int ans = min(d , a);
    cout<<ans<<endl;
}
return 0;
}