#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a){
        if(a==b && a!= c||b==c && c!= a||c==a && c!= b){
            cout<<"Valido-Isoceles"<<endl;
        }
        if(a==b&&b==c&&c==a){
            cout<<"Valido-Equilatero"<<endl;
        }if(a!=b&&b!=c&&c!=a){
            cout<<"Valido-Escaleno"<<endl;
        }
        if(pow(a,2)== pow(b,2)+pow(c,2) || pow(b,2)== pow(a,2)+pow(c,2) || pow(c,2)== pow(b,2)+pow(a,2)){
            cout<<"Retangulo: S"<<endl;
        }else{
            cout<<"Retangulo: N"<<endl;
        }
    }else{
        cout<<"Invalido"<<endl;
    }

    return 0;
}