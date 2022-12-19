#include<iostream>
using namespace std;

int main(){
    int a;
    int cnt = 0;
    while(cin>>a){
        cnt++;
        int b = 1 + a*(a+1)/2;
        if(a == 0){
        cout<<"Caso "<<cnt<<": "<<b<<" numero"<<endl;
        }else{
            cout<<"Caso "<<cnt<<": "<<b<<" numeros"<<endl;
        }
        cout<<"0";
        for(int i = 0 ; i <= a;i++){
            for(int j = 0 ; j < i; j++){
                cout<<" "<<i;
            }
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}