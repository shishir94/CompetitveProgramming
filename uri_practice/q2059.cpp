#include<iostream>
using namespace std;

int main(){
    int a, b , c,d,e;
    cin>>a>>b>>c>>d>>e;
    if( d == 1 && e ==1){
        cout<<"Jogador 2 ganha!"<<endl;
    }else if ( d == 1 && e == 0){
        cout<<"Jogador 1 ganha!"<<endl;
    }else if(d== 0 && e == 1){
        cout<<"Jogador 1 ganha!"<<endl;
    }else if(d == 0 && e == 0){
        int sum = b +c;
        if( a == 1 && sum % 2 == 0){
            cout<<"Jogador 1 ganha!"<<endl;
        }
        if( a== 1 && sum % 2 != 0){
            cout<<"Jogador 2 ganha!"<<endl;
        }
        if( a == 0 && sum % 2 == 0){
            cout<<"Jogador 2 ganha!"<<endl;
        }
        if( a == 0 && sum % 2 != 0){
            cout<<"Jogador 1 ganha!"<<endl; 
        }      
    }
    return 0;
}