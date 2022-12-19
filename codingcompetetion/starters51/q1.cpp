#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long cnt(int x){
    long long cnt1 = 0;
    while(x!= 0){
        int c = x %2;
        x = x/2;
        if(c == 1){
            cnt1++;
        }
    }
    return cnt1;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long d = cnt(n);
    if(d == 1){
        cout<<"0"<<endl;
    }else if(d == 2){
        cout<<"1"<<endl;
    }else{
        cout<<d-1<<endl;
    }
}
return 0;
}