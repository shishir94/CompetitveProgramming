#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int ii=1;ii<=t;ii++){
    cout<<"Case #"<<ii<<": ";
    string x;
    cin>>x;
    int n = x.size();
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + (x[i]-'0');
    }
    int a;
    for(int i = 0;i<=9;i++){
        if((sum+i) % 9 == 0){
            a = i;
            break;
        }
    }
    if( a != 0){
        int z = n;
        for(int i = 0;i<n;i++){
            if(a < (x[i]-'0')){
                z = i;
                break;
            }
        }
        x = x.substr(0,z) + to_string(a) + x.substr(z);
        cout<<x<<endl;
    }else{
        int z = n;
        for(int i = 1;i<n;i++){
            if(a < (x[i]-'0')){
                z = i;
                break;
            }
        }
        x = x.substr(0,z) + to_string(a) + x.substr(z);
        cout<<x<<endl;
    }
}
return 0;
}