#include<iostream>
using namespace std;

int main(){
    long long a , b , c , d;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c>>d;
        long long x = min(b,c);
        d  = d*(d+1)/2;
        if(d <= x){
            cout<<b+c-2*d<<endl;
        }else{
            cout<<b+c-2*x<<endl;
        }
    }   
    return 0;          
}   