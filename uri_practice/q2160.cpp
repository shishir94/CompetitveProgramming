#include<iostream>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    int b = a.size();
    if( b > 80){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    return 0;
}