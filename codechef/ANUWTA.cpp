#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0 ; i < a;i++){
        cin>>b;
        long long ans = 0;
        if(b % 2 != 0){
            ans = ans + (b-1)/2;
            ans = ans*b;
        }else if(b % 2 == 0){
            ans = ans + b/2;
            ans = ans*(b-1);
        }
        long long  sum = ans + 2*b;
        cout<<sum<<endl;
    }
    return 0;
}