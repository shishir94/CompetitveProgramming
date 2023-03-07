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
    if(n%2==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        int x=1;
        int y=2*n;
        while(y!=2*x){
            cout<<x<<" "<<y<<endl;
            x++;
            y=y-2;
        }
        cout<<x<<" "<<y<<endl;
        x=x+1;
        y=2*n-1;
        while(x<=n){
            cout<<x<<" "<<y<<endl;
            x++;
            y=y-2;
        }
    }
}
return 0;
}