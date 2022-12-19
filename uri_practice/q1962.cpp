#include<iostream>
using namespace std;

int main(){
    int a , b;
    cin>>a;
    for(int i = 0 ; i < a ; i++){
        cin>>b;
        if( b >= 2015){
            cout<<b-2014<<" A.C."<<endl;
        }else{
            cout<<2015-b<<" D.C."<<endl;
        }
    }
    return 0;
}