#include<iostream>
using namespace std;

int main(){
    int t,n,m,x,y;
    cin>>t;
    for(int i = 0;i<t;i++){
        cin>>n>>m>>x>>y;
        if(n == 1 && m == 1){
            cout<<x<<endl;
        }else{
            x = min(x,y);
            y = min(y-x,x);
            int d = ((n*m)+1)/2*x+((n*m)/2)*y;
            cout<<d<<endl;
        }    
    }
    return 0;
}