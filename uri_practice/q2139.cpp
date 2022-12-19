#include<iostream>
using namespace std;

int main(){
    int a , b;
    while(cin>>a>>b){
        int arr[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
        if(a < 12){
            int sum = 0;
            for(int i = a;i<11;i++){
                 sum = sum + arr[i];
            }
            int c = sum + arr[a-1]-b+25;
            cout<<"Faltam "<<c<<" dias para o natal!"<<endl;
        }else if( a == 12 && b < 24){
            cout<<"Faltam "<<25-b<<" dias para o natal!"<<endl;
        }else if( a== 12 && b > 25){
            cout<<"Ja passou!"<<endl;
        }else if(a == 12 && b == 24){
            cout<<"E vespera de natal!"<<endl;
        }else if( a == 12 && b == 25){
            cout<<"E natal!"<<endl;
        }
    }
    return 0;
}