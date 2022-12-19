#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int n1 = 0 , n2 = 1;
    int n3;
    if ( n == 1){
        cout<<n1<<endl;
    }else{
        cout<<n1<<" "<<n2<<" ";
        for( int i = 3 ; i <= n ; i++){
            n3 = n1 + n2;
            if ( i == n){
                cout<<n3;
            }else{
            cout<<n3<<" ";
            }
            n1 = n2;
            n2 = n3;
        }
        cout<<endl;
    }

    return 0;
}