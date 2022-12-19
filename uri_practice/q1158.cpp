#include<iostream>
using namespace std; 

int main(){
    int n , x , y;
    cin>>n;
    for( int i = 1 ; i <= n ; i++){
        cin>>x>>y;
        int a = 0;
        int sum = 0;
        for( int j = 0; j < 2*y ; j++){
            a = x + j;
            if (a % 2 != 0 ){
                sum = sum + a;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}