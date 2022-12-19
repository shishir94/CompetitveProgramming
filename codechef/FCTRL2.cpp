#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        if(b==0){
            cout<<"1"<<endl;
        }
        cpp_int multiply = 1;
        for(int i = 1;i<=b;i++){
            multiply = multiply *i;
        }
        cout<<multiply<<endl;
    }
    return 0;
}