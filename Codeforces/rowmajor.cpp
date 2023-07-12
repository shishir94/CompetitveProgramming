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
    if(n==1){
        cout<<"a"<<endl;
    }else if(n==2){
        cout<<"ab"<<endl;
    }else{
        int p=1;
        while(n%p==0){
            p++;
        }
        char c = 'a';
        for(int i=0;i<n;i++){
            cout<<c;
            c++;
            if(int(c-'a') >=p){
                c='a';
            }
        }
        cout<<endl;
    }
}
return 0;
}