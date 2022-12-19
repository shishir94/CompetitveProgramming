#include<iostream>
using namespace std;

int main(){
    int n, x;
    cin>>n;
    long long Fib[61];
    Fib[0]= 0;
    Fib[1]= 1;
    for( int i = 0 ; i < n ; i++){
        cin>>x;
        for(int j = 2 ; j <61 ; j++){
            Fib[j] = Fib[j-1] + Fib[j - 2];
            
        }
        cout<<"Fib("<<x<<") = "<<Fib[x]<<endl;
    }
    

    return 0;
}