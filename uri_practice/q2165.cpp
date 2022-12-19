#include<iostream>
using namespace std;

int main(){
    string a;
    getline(cin ,a);
    int b = a.size();
    if( b > 140){
        cout<<"MUTE"<<endl;
    }else{
        cout<<"TWEET"<<endl;
    }
    return 0;
}

    
