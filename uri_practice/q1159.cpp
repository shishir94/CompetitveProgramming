#include<iostream>
using namespace std;

int main(){
    int a ;
    while(true){
        cin>>a;
        if ( a == 0){
            break;
        }
       
        int x = 0;
        int sum = 0;
        for ( int i = 0 ; i <= 9 ; i++){
             x = a + i;
             if ( x % 2 == 0){
                 sum = sum + x;
             }
        }
        cout<<sum<<endl;
    }
    return 0;
}