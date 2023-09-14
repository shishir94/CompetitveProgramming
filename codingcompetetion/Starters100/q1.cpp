#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p)
{
 
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
    // int x=0;
    // for(int i=0;i<n;i++){
    //     if(s[i] != '1'){
    //         s[i]='0';
    //     }
    //     else{
    //         x=i;
    //         break;
    //     }
    // }
    // for(int i=x+1;i<n;i++){
    //     s[i] ='0';
    // }
    for(int i=0;i<n-2;i++){
        if(s[i]=='1'){
            for(int j=i+1;j<n;j++){
                s[j]='0';
            }
        }
    }
    cout<<s<<endl;
}
return 0;
}