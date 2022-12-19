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
    long long d = n-1;
    if(n == 2 || n == 3){
        cout<<d<<endl;
    }else{
        cout<<n<<endl;
    }
}
return 0;
}