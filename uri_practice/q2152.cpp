#include<iostream> 
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a;
    for(int i = 0 ; i < a ; i++){
        cin>>b>>c>>d;
        if(b < 10 && c < 10){
            if(d== 0){
                cout<<"0"<<b<<":0"<<c<<" - A porta fechou!"<<endl;
            }else{
                cout<<"0"<<b<<":0"<<c<<" - A porta abriu!"<<endl;
            }
        }if(b < 10 && c >= 10){
            if(d== 0){
                cout<<"0"<<b<<":"<<c<<" - A porta fechou!"<<endl;
            }else{
                cout<<"0"<<b<<":"<<c<<" - A porta abriu!"<<endl;
            }
        }if(b >= 10 && c < 10){
            if(d== 0){
                cout<<b<<":0"<<c<<" - A porta fechou!"<<endl;
            }else{
                cout<<b<<":0"<<c<<" - A porta abriu!"<<endl;
            }
        }if(b >= 10 && c >= 10){
            if(d== 0){
                cout<<b<<":"<<c<<" - A porta fechou!"<<endl;
            }else{
                cout<<b<<":"<<c<<" - A porta abriu!"<<endl;
            }
        }           
    }
    return 0;
}
