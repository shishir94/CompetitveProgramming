#include<iostream>
using namespace std;

int main(){
    int a , b ,x ,y;
    cin>>a>>b;
    if( a >= b){
        x = b ;
        y = a;
        
    }else if ( a < b){
        x = a ;
        y = b;
    }
    int sum = 0;
    for( int i = x ; i <= y ; i++){
        if ( i % 13 != 0){
            sum = sum + i;
        }
       
    }
    cout<<sum<<endl;
    
    return 0;
}