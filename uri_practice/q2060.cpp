#include<iostream>
using namespace std ;

int main(){
    int a, b;
    cin>>a;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    for(int i = 0 ; i < a ; i++){
        cin>>b;
        if( b % 2 == 0){
            cnt1++;
        }
        if( b % 3 == 0){
            cnt2++;
        }
        if(b % 4 == 0){
            cnt3++;
        }
        if(b % 5 == 0){
            cnt4++;
        }
    }
    cout<<cnt1<<" Multiplo(s) de 2"<<endl;
    cout<<cnt2<<" Multiplo(s) de 3"<<endl;
    cout<<cnt3<<" Multiplo(s) de 4"<<endl;
    cout<<cnt4<<" Multiplo(s) de 5"<<endl;
    return 0;
}