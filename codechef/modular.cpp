#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int cnt = 0;
    int x = 0;
    for(int i = 2;i<=n;i++){
        if(m%i==0){
            x++;
            cnt+=(i-1);
        }
    }
    cnt+=(n-1-x);
    cout<<cnt<<endl;
}
return 0;
}