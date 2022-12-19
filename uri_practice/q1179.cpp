#include<iostream>
using namespace std;

int main(){
    int a , x , p;
    int par[5];
    int impar[5];
    x = 0;
    p = 0;
    for(int i = 0 ; i < 15 ; i++){
        cin>>a;
    }   
    if( a % 2 == 0){
        cout<<"par["<<x<<"] = "<<a<<endl; 
        x++;
    }else{
        cout<<"impar["<<p<<"] = "<<a<<endl;
        p++;
    }
    if ( x == 5 || p == 0){
        x = 0;
        p = 0;
        if( a % 2 == 0){
            cout<<"par["<<x<<"] = "<<a<<endl; 
            x++;
        }else{
            cout<<"impar["<<p<<"] = "<<a<<endl;
            p++;
        }
    }

    
    return 0;
}
