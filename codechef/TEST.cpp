#include<iostream>
using namespace std;

int main(){
    int a;
    while(true){
        cin>>a;
        if(a != 42){
        cout<<a<<endl;
        }
        if(a == 42){
            cout<<endl;
            break;
        }
    }
    return 0;
}