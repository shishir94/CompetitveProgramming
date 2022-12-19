#include<iostream>
using namespace std;

int main(){
    long long a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        cout<<"3";
        if(b > 0){
            int c = (103993%33102);
            cout<<".";
            while(b--){
                c = c*10;
                cout<<c/33102;
                c = c % 33102;
            }
        }
        cout<<endl;
    }
    return 0;
}