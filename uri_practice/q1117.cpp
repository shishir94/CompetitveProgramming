#include<iostream>
using namespace std;

int main(){
    double x;
    int cnt = 0;
    double num1 = -1;
    double num2;
    while(true){
        cin>>x;
        if(x >= 0.0 && x<=10.0){
            if(num1 == -1){
                num1 = x;
            }else{
                num2 = x;
            }
            cnt++;
        }
        if(cnt == 2){
            double avg = (num1 + num2)/2.0;
            cout<<"media = "<<avg<<endl;
            break;
        }
        if ( x < 0 || x > 10){
            cout<<"nota invalida"<<endl;
        }
    }
    
    return 0;
}