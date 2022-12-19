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
    if(n ==1){
        cout<<"1"<<endl;
    }else{
        long long x = (n-2);
        long long sum = x*(x+1)+1;
        cout<<sum<<"\n";    
    }
}
return 0;
}