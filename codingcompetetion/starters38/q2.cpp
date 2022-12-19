#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a,b,m;
    cin>>a>>b>>m;
    int x = min(a,b);
    int y = max(a,b);
    int ans = min((y-x),(m-y+x));
    cout<<ans<<endl;
}
return 0;
}