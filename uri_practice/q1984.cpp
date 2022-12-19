#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    int b = a.size();
    string c;
    for(int i = 0 ; i < b;i++){
        c = c + a[b-i-1];
    }
    cout<<c<<endl;
    return 0;
}