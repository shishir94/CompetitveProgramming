#include<iostream>
using namespace std;

int main(){
    int n , x;
    cin>>n;
    for( int i = 0 ; i < n ; i++){
        cin>>x;
        if( x == 2){
            cout<<"2 eh primo"<<endl;
        }else{
            bool t = false;
            for( int j = 2 ; j < x ; j++){
                if( x % j == 0){
                    t = true;
                    cout<<x<<" nao eh primo"<<endl;
                    break;
                }

            }
            if(t == false){
                cout<<x<<" eh primo"<<endl;
            }
        }
        
    }
    return 0;
}