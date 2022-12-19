#include<iostream>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    int r;
    for(int i = 0 ; i < n;i++){
        cin>>a;
        int sum = 0;
        while(a>0){
            r = a % 10;
            sum = sum+r;
            a = a /10;
        }
        cout<<sum<<endl;
    }
    return 0;
}