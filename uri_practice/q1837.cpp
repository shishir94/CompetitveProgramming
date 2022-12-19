#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int q = a/b;
    int r = a%b;
    if(r<0){
       if( q < 0){
           q = q - 1;
       }else if ( q > 0){
           q = q + 1;
       }
       r = a - b * q; 
    }
    cout<<q<<" "<<r<<endl;
    return 0;
}