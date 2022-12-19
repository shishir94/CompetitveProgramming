#include<iostream>
using namespace std;

int main(){
    int a ,  b , x , y;
    cin>>a>>b;
    if( a >= b){
        x = b ;
        y = a;
        
    }else if ( a < b){
        x = a ;
        y = b;
    }    
    for( int i = x+1 ; i < y ; i++){
        if ( i % 5 == 2 || i % 5 == 3){
            cout<<i<<endl;
        }
    }

    return 0;
}