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
    string s;
    cin>>s;
    long long j = 1000000007;
    long long f = 1;
    for(int i=0;i<n;i++){
        if((s[i]=='c') || (s[i]=='g') || (s[i]=='l') || (s[i]=='r')){ 
            f=(f*2)%j;
        }
    }
    cout<<f<<endl;
}
return 0;
}