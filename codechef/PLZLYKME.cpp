#include<iostream>
using namespace std;

int main(){
    long long a,b,c,d,e;
    cin>>a;
    for(int i = 0 ;i < a ;i++){
        cin>>b>>c>>d>>e;
        bool t = false;
        if(c == 1){
            if(d >= b){
                t = true;
            }else{
                t = false;
            }
        }else{
            for(int i = 1;i < c;i++){
                d = d*(e+1);
                if(d >= b){
                    t = true;
                    break;
                }else{
                    t = false;
                } 
            }
        }
        if(t == true){
            cout<<"ALIVE AND KICKING"<<endl;
        }else{
            cout<<"DEAD AND ROTTING"<<endl;
        }
    }
    return 0;
}