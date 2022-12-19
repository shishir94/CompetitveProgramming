#include<iostream>
using namespace std;

int main(){
    int a , b,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        if(b/2 <= c ){
            cout<<b/2<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    return 0;
}