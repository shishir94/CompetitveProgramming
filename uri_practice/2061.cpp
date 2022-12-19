#include<iostream>
using namespace std;

int main(){
    int a , b;
    string m;
    cin>>a>>b;
    for(int i = 0 ; i < b ; i++){
        cin>>m;
        if( m == "fechou"){
            a++;
        }else{
            a--;
        }
    }
    cout<<a<<endl;
    return 0;
}