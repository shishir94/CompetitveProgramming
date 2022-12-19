#include<iostream>
using namespace std;

int main(){
    string a;
    while(cin>>a){
        int b = a[0]-'0';
        int c = (a[2]-'0')*10 + (a[3]-'0');
        if(b >= 7){
            int d = (b-7)*60+c;
            cout<<"Atraso maximo: "<<d<<endl;
        }else{
            cout<<"Atraso maximo: 0"<<endl;
        }
    }
    return 0;
}