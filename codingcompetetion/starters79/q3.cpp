#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    long long value_x,value_y;
    cin>>value_x>>value_y;
    if(value_x == value_y){
        if(value_x%2==0){
            cout<<"CHEFINA"<<endl;
        }else{
            cout<<"CHEF"<<endl;
        }
    }else if (value_x > value_y){
        if(value_x-value_y>=2){
            cout<<"CHEF"<<endl;
        }else{
            if(value_x%2==0){
                cout<<"CHEFINA"<<endl;
            }else{
                cout<<"CHEF"<<endl;
            }
        }
    }else{
        // if(value_x==1){
        //     if(value_y<=2){
        //         cout<<"CHEF"<<endl;
        //     }else{
        //         cout<<"CHEFINA"<<endl;
        //     }
        // }else{
            if(value_y-value_x>=2){
                cout<<"CHEFINA"<<endl;
            }else{
                if(value_y%2==0){
                    cout<<"CHEF"<<endl;
                }else{
                    cout<<"CHEFINA"<<endl;
                }
            }
    }
}
return 0;
}