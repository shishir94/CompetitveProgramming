#include<iostream>
using namespace std;

int main(){
    int x , y;
    int a = 0;
    
    cin>>x>>y;
    if ( y % x == 0){
        for ( int i = 1 ; i <= ( y / x); i++){
            for( int j = 1 ; j <= x; j++){
                a = a +1;
                if(j == x){
                    cout<<a;
                }else{
                    cout<<a<<" ";
                }
                
            }
            cout<<endl;
        }
    }else if ( y % x != 0){
        
        for ( int i = 1 ; i <= (y / x)+1 ; i++){
            for( int j = 1 ; j <= x; j++){
                a = a +1;
                if ( a > y){
                    break;
                }
                if( j == x){
                    cout<<a;
                }else{
                    cout<<a<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
