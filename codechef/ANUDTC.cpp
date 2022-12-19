#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        if(360 % b == 0){
            cout<<"y"<<" ";
        }else{
            cout<<"n"<<" ";
        }
        if( b <= 360){
            cout<<"y"<<" ";
        }else{
            cout<<"n"<<" ";
        }
        if( b <= 26){
            cout<<"y"<<endl;
        }else{
            cout<<"n"<<endl;
        }

    }
    return 0;
}