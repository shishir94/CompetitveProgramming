#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x,y;
    cin>>x>>y;
    if(y>=x){
        cout<<(y-x)<<endl;
    }else{
        if((x%2== 0 && y % 2 ==0)|| (x%2!= 0 && y % 2 !=0)){
            cout<<(x-y)/2<<endl;
        }else{
            cout<<((x-y)+3)/2<<endl;
        }
    }
}
return 0;
}