#include<iostream>
using namespace std;

int main(){
    int a;
    string b;
    cin>>a;
    for(int i = 0 ; i < a ;i++){
        cin>>b;
        int c = b.size();
        if(c < 10){
            cout<<b<<endl;
        }else{
            cout<<b[0]<<c-2<<b[c-1]<<endl;
        }
    }
    return 0;
}