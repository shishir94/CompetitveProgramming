#include<iostream>
using namespace std;

int main(){
    int a , b;
    cin>>a>>b;
    int arr[b];
    for(int i = 0 ; i < b ; i++){
        cin>>arr[i];
    }
    bool t = true;
    for(int i = 0 ; i < b -1 ; i++){
        if(a >= abs(arr[i]-arr[i+1])){
            t = false;
        }else{
            t = true;
            cout<<"GAME OVER"<<endl;
            break;       
        }
    }
    if( t== false){
        cout<<"YOU WIN"<<endl;
    }
    
    
    
    
    return 0;
}
