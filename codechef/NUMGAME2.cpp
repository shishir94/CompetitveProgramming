#include<iostream>
using namespace std;

int main(){
    long long a ,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        if(b % 4 == 1){
            cout<<"ALICE"<<endl;
        }else{
            cout<<"BOB"<<endl;
        }
    }
    return 0;
}