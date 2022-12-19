#include<iostream>
using namespace std;

bool fun( int x , int y , int z){
    bool t = true;
    if( x + y > z && x + z > y && y + z > x){
        t = true;
    }else{
        t = false;
    }
    return t;
}

int main(){
    int a , b , c , d;
    cin>>a>>b>>c>>d;
    if( fun(a,b,c) == true || fun(a ,b,d) == true || fun(a ,c , d) == true || fun(b,c,d)==true){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    return 0;
}