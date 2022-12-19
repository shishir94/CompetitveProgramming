#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,g;
    while(cin>>a>>b>>c>>d>>e>>f>>g){
        double x = sqrt(pow((a-c),2) + pow((b-d),2));
        int y = f + g;
        double z = x + 1.5*e;
        //cout<<z<<endl;
        if(y >= z){
            cout<<"Y"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }
    return 0;
}