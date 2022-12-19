#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        for(int i = 0;i<b;i++){
            int d = ((i+1)^i);
            cout<<d<<" ";
        }
        cout<<endl;
    }
    return 0;
}