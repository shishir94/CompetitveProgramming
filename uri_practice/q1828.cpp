#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s , r;
    for( int i = 0 ; i < n ; i ++){
        cin>>s>>r;
        if ( s == r){
            cout<<"Caso #"<<(i+1)<<": De novo!"<<endl;
        }else if( s == "tesoura"){
            if( r == "papel" || r == "lagarto"){
                cout<<"Caso #"<<(i+1)<<": Bazinga!"<<endl;
            }else{
                cout<<"Caso #"<<(i+1)<<": Raj trapaceou!"<<endl;
            }
        }else if ( s == "papel"){
            if( r == "pedra" || r == "Spock"){
                cout<<"Caso #"<<(i+1)<<": Bazinga!"<<endl;
            }else{
                cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
            }
        }else if ( s == "pedra"){
            if( r == "lagarto" || r =="tesoura"){
                cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
            }else{
                cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
            }  
        }else if(s == "lagarto"){
            if( r == "Spock" || r == "papel"){
                cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
            }else{
                cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
            }
        }else if ( s == "Spock"){
            if( r == "tesoura" || r == "pedra"){
                cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
            }else{
                cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
            }
        }
    }
    return 0;
}