#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        for(int i=0;i<b;i++){
            cin>>c>>d>>e;
            if(c == 1){
                if( d % 2 == 0){
                    cout<<d/2<<endl;
                }else{
                    if(e==1){
                        cout<<d/2<<endl;
                    }else{
                        cout<<d/2+1<<endl;
                    }
                }
            }else if(c==2){
                if(d%2==0){
                    cout<<d/2<<endl;
                }else{
                    if(e==1){
                        cout<<d/2+1<<endl;
                    }else{
                        cout<<d/2<<endl;
                    }
                }
            }            
        }
    }

    return 0;
}