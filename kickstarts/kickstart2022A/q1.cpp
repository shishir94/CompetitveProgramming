#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int ii=1;ii<=t;ii++){
    cout<<"Case #"<<ii<<": ";
    string x,y;
    cin>>x>>y;
    int n = x.size();
    int m = y.size();
    int i = 0;
    int j = 0;
    while(i  < n && j < m){
        if(x[i] == y[j]){
            i++;
            j++;
        }else{
            j++;
        }
    }
    if(i == n){
        int ans = m-n;
        cout<<ans<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}
return 0;
}