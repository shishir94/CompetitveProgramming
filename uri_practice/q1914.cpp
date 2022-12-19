#include<iostream>
using namespace std;

int main(){
    int n;
    long long a , b;
    cin>>n;
    string str[4];
    for( int i = 0 ; i < n ; i++){
        cin>>str[0]>>str[1]>>str[2]>>str[3];
        cin>>a>>b;
       int sum =  a + b;
        if( sum % 2 == 0){
            if( str[1] == "PAR"){
                cout<<str[0]<<endl;
            }else{
                cout<<str[2]<<endl;
            }
        }else{
            if( str[1] == "IMPAR"){
                cout<<str[0]<<endl;
            }else{
                cout<<str[2]<<endl;
            }
        }
    }
    return 0;
}