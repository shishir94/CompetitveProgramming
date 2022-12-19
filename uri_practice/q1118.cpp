#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double a;
    int x;
    int cnt = 0;
    double num1 =-1;
    double num2 ;
    while (true){
        if ( x == 2){
            break;
        }
        cin>>a;
        if( a >= 0.0 && a <= 10.0){
            if ( num1 == -1){
                num1 = a;
            }else {
                num2 = a;
            }
            cnt++;
        }
        if ( cnt == 2){
            double avg = (num1 + num2)/(2.0);
            cout<<"media = "<<fixed<<setprecision(2)<<avg<<endl;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            
            
            while(true){
                cin>>x;
                if(x == 2){
                    break;
                }
                if(x == 1){
                    num1 = -1;
                    cnt = 0;
                    break;
                }else{
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                }
            }    
        }
        if ( a < 0.0 || a > 10.0){
            cout<<"nota invalida"<<endl;
        }
     
    }
    

    return 0;
}