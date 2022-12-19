#include<iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b;
    for(int i = 0;i<b;i++){
        cin>>c;
        if(c <= a+1 || c > 3*a){
            cout<<"0"<<endl;
        }else if( c > a+1 && c < 2*a+1){
            long long d = abs(2*a-c);
            long long ans = (a-d-1);
            cout<<ans<<endl;
        }else{
            long long d = abs(2*a-c);
            long long ans = (a-d+1);
            cout<<ans<<endl;
        }
    }
    return 0;
}