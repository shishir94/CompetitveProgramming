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
    int i=1;
    int cnt =1;
    int a =0;   
    int b =0;
    while(n>0){
        if(cnt%4<=1){
            a+=min(n,i);
        }else{
            b+=min(n,i);
        }
        if(n-i>=0){
            n=n-i;
        }else{
            n=0;
        }
        i++;
        cnt++;
    }
    cout<<a<<" "<<b<<endl;
}
return 0;
}   