#include<iostream>
using namespace std;

int main(){
    int x , y , m , n;
    while(true){
        cin>>x>>y;
        if ( x >= y){
            m = x;
            n = y;
        }else if ( x < y){
            m = y;
            n = x;
        }
        if(x<=0 || y<=0){
            break;
        }
        int sum = 0;
        for ( int i = n ; i <= m ; i++){
            sum = sum + i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;
    }
    return 0;
}