#include<iostream>
using namespace std;

int main(){
    int a,x;
    cin>>a;
    int b[a];
    
    for(int i = 0 ; i < a ; i++){
        cin>>b[i];
    }
    bool t = true;
    for(int i = 0 ; i < a-1 ; i++){
        if(b[i] > b[i+1]){
            x = i+2;
            t = false;
            break;
        }else{
            t = true;
        }
    }
    if(t==true){
        cout<<"0"<<endl;
    }else{
        cout<<x<<endl;
    }
    return 0;
}