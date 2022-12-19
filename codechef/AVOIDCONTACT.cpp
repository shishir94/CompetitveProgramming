#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        if(c == 0){
            cout<<b<<endl;
        }else if( b - c == 0){
            cout<<2*c-1<<endl;
        }else{
            cout<<c*2+(b-c)<<endl;
        }
    }
    return 0;
}