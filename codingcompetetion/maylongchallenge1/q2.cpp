#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    int a = 2*(n-1);
    int b = max(x,y);
    int c = min(x,y);
    int d = (n-b);
    int e = (c-1);
    int f = (n-y);
    int g = (x-1);
    int j = min(f,g);
    int h = (y-1);
    int i = (n-x);
    int k = min(h,i);
    int ans = a+d+e+j+k;
    cout<<ans<<endl;   
}
return 0;
}