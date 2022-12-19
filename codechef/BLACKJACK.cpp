#include<iostream>
using namespace std;

int main(){
    int a , b ,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        int d = 21-b-c;
        if(d<=10){
            cout<<d<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}