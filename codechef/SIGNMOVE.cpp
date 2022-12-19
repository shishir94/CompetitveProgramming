#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    if(n %2 == 0){
        int x = n/2;
        cout<<x<<endl;
    }else{
        int x = n/2;
        x = -(x+1);
        cout<<x<<endl;
    }
} 
return 0;
}