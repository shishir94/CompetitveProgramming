#include<iostream>
using namespace std;

int main(){
    int a , b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        if(b % 10 == 0){
            int d = b/10;
            cout<<d<<"\n";
        }else{
            int d = b/10+1;
            cout<<d<<"\n";
        }
    }
    return 0;
}