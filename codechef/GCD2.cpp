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
    int n;
    cin>>n;
    long long a ,b;
    for(int i = 0;i<n;i++){
        cin>>a>>b;
        cout<<gcd(a, b)<<endl;
    }
    return 0;
}