#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int multiply = 1;
    for ( int i = 1 ; i <= n ; i++){
        multiply = multiply * i;

    }
    cout<<multiply<<endl;
    return 0;
}