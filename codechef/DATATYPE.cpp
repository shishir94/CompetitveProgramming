#include<iostream>
using namespace std;

int main(){
    int a , b ,c ;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        int sum = 0;
        int d;
        if(b >= c){
            cout<<c<<endl;
        }else{
            while(c > b){
                c = c-b-1;
                if(c <= b){
                    cout<<c<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}