#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    for(int i = 0 ; i < a ;i++){
        cin>>b>>c;
        int sum = 0;
        sum = sum + b + c;
        cout<<sum<<endl;
    }
    return 0;
}