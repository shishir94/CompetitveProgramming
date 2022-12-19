#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    int cnt = 0;
    for(int i = 0 ;i<5;i++){
        cin>>b;
        if( b == a){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}