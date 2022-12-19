#include<iostream>
using namespace std;

int main(){
    int a;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    cout<<"MUITO OBRIGADO"<<endl;
    while(true){
        cin>>a;
        
        if ( a == 4){
            break;
        }
        if ( a > 4){
            cin>>a;
        }
         if ( a == 1){
             cnt1++;
         } 
      
        if ( a == 2 ){
            cnt2++;
        }
        
        if( a == 3){
            cnt3++;
        }
    }    
        cout<<"Alcool: "<<cnt1<<endl;
        cout<<"Gasolina: "<<cnt2<<endl;
        cout<<"Diesel: "<<cnt3<<endl;

    
    
    return 0;
}