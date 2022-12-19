#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a;
    for(int i =0;i<a;i++){
        cin>>b>>c>>d;
        for(int i = 0 ;i < d;i++){
            cin>>e>>f;
            if(c >= e && c <= f){
                c = e+f-c;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}