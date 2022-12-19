#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a; 
    for(int i = 0;i<a;i++){
        cin>>b>>c>>d;
        int arr[b];
        if(c < d){
            cout<<"-1"<<endl;
        }else{
            int i = 0;
            while(b--){
                if( i == d){
                    i = 0;
                }
                cout<<i<<" ";
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}