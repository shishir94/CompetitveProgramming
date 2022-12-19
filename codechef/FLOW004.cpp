#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    string a;
    for(int i = 0;i<x;i++){
        cin>>a;
        int sum =0;
        int b = a.size();
        int x = a[0] -'0';
        int y = a[b-1]-'0';
        sum = sum+x+y;
        cout<<sum<<endl;
    }
    return 0;
}