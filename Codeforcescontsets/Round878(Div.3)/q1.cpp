#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1 ="";
    // int n = s.size();
    int k=0;
    int i=0;
    while(i<n){
        int d=0;
        for(int j=i+1;j<n;j++)
        {
            if(s[j]==s[i]){
                s1+=s[i];
                d=j+1;
                break;
            }
        }
        i=d;
    }
    cout<<s1<<endl;
}
return 0;
}