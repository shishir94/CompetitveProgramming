#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        int a[2*b];
        for(int i = 0;i<2*b;i++){
            cin>>a[i];
        }
    }
    return 0;
}