#include<iostream>
using namespace std;

int gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}
int main(){
    int a ,b;
    cin>>a>>b;
    cout<<(a, b)<<endl;
    return 0;
}