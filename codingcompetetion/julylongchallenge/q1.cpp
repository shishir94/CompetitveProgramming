#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int e = abs(x1-x2)+abs(y1-y2);
    if(e%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}