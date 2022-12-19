#include<iostream>
using namespace std;

bool fun(int x, int y, int z){
    bool p = true;
    if(x >= y+z || y>=x+z || z>=x+y){
        p = false;
    }
    return p;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(fun(a,b,c) == true || fun(a,b,d) || fun(a,c,d) || fun(b,c,d)){
        cout<<"Y"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    return 0;
}