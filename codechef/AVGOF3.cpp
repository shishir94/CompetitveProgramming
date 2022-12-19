#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        long long d = 3*b;
        long long e = d - 3;
        cout<<"1 "<<" 2 "<<e<<endl;
    }
    return 0;
}