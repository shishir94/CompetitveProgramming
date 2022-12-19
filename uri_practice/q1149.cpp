#include<iostream>
using namespace std;

int main(){
    int a , n;
    cin>>a;
    int sum = 0;
    while(true){
        cin>>n;
        if ( n > 0){
            for( int i = a ; i < ( a+ n); i++){
                sum = sum + i;
            }
            cout<<sum<<endl;
            break;
            
        }
        if ( n <= 0){
            cin>>n;
        }
    }   
        
    return 0;
}