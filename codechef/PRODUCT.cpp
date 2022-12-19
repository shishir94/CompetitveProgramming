#include<iostream>
using namespace std;
long long gcd(long long a , long long b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

int main(){
    long long a , b ,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        long long x = gcd(b , c);
        long long y = (b*c)/x;
        long long g = y/b;
        cout<<g<<"\n";
    }
    return 0;
}