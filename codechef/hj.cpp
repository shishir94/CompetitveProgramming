#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i =0;i<a;i++){
        cin>>b;
    int cnt = 0;
    for(int i = 1;i<=b;i++){
        if(b % i == 0){
            cnt++;
            if(cnt > 3){
                break;
            }
        }
    }
    if(cnt == 3){
        cout<<"Y"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    }
    return 0;
}