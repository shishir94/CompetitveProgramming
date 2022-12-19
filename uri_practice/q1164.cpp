#include<iostream>
using namespace std;

int main(){
    int n , x;
    cin>>n;
    for( int i = 1 ; i <= n ; i++){
        cin>>x;
        int sum = 0;
        for ( int j = 1 ; j < x ; j++){
            if (x % j == 0){
                sum = sum + j;
            }
            

            
        }
        if ( sum == x){
            cout<<x<<" eh perfeito"<<endl;
        }else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }
    return 0;
}