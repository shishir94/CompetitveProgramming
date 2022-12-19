#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,g,h;
    cin>>a;
    for(int i = 0 ; i < a ; i++){
        cin>>b;
        cin>>c>>d>>e>>f>>g>>h;
        double y , z;
        if(e % 2 == 0 && h % 2== 0){
            y = (c+d)/2+b;
            z = (f+g)/2+b;
        }
        if(e % 2 == 0 && h % 2 != 0){
            y = (c+d)/2+b;
            z = (f+g)/2;
        } 
        if(e % 2 != 0 && h % 2 != 0){
            y = (c+d)/2;
            z = (f+g)/2;
        } 
         if(e % 2 != 0 && h % 2 == 0){
            y = (c+d)/2;
            z = (f+g)/2+b;
        }
        if(y>z){
            cout<<"Dabriel"<<endl;
        }else if(y < z){
            cout<<"Guarte"<<endl;
        }else{
            cout<<"Empate"<<endl;
        }         
    }
    return 0;
}