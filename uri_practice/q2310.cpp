#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int arr[6];
    string b;
    cin>>a;
    int sum[6] ={0,0,0,0,0,0};
    for(int i = 0 ; i<a;i++){
        cin>>b;
        for(int i=0;i<6;i++){
            cin>>arr[i];
            sum[i] = sum[i]+arr[i];
        }
    }
    double c = sum[3]/double(sum[0])*100;
    double d = sum[4]/double(sum[1])*100;
    double e = sum[5]/double(sum[2])*100;
    cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<c<<" %"<<endl;
    cout<<"Pontos de Bloqueio: "<<fixed<<setprecision(2)<<d<<" %"<<endl;
    cout<<"Pontos de Ataque: "<<fixed<<setprecision(2)<<e<<" %"<<endl;
    return 0;
}