#include<iostream>
using namespace std;

int main(){
    int n , x , y;
    cin>>n;
    for( int i = 0 ; i < n ; i++){
        cin>>x>>y;
        int sum = x + y;
        cout<<sum<<endl;
    }
    return 0;
}