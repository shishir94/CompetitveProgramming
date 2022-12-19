#include<iostream>
using namespace std;

int main(){
    int x,a;
    a = 0;
    cin>>x;
    for( int i = 0 ; i < 1000  ; i++){
        int N[i];
        int b = a++;
        cout<<"N["<<i<<"] = "<<b<<endl;
        if( a== x){
            a = 0;
        }
    }
        
    return 0;
}
