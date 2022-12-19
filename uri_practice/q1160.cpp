#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , Pa , Pb;
    double Ra , Rb;
    cin>>n;
    for(int i = 0 ; i < n ; i ++){
        cin>>Pa>>Pb>>Ra>>Rb;
        bool t = true;
        int P1 = Pa;
        int P2 = Pb;
        for( int j = 1 ; j <= 100 ; j++){
           P1 = P1 + P1 * Ra/100.0;
           P2 = P2 + P2 * Rb/100.0;   
            if( P1 > P2){
                t = false;
                cout<<j<<" anos."<<endl;
                break;
            }
        }
        if( t == true){
            cout<<"Mais de 1 seculo."<<endl;
        }
        
    }
    return 0;
}