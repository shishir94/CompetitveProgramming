#include<iostream>
using namespace std;

int main(){
    int a ,b;
    while(true){
        cin>>a>>b;
        if (a == 0 && b== 0){
            break;
        }
        bool t = true;
        int arr[15] = {7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};
        for(int i=0;i<15;i++){
            if(b-a == arr[i]){
                t = false;
                break;
            }else{
                t = true;
            }
        }
        if(t == false){
            cout<<"possible"<<endl;
        }else{
            cout<<"impossible"<<endl;
        }
    }   
    return 0;
}