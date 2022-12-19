#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        int arr[b];
        int cnt = 0;
        for(int i = 0 ; i < b ; i++){
            cin>>arr[i];
            if(arr[i] % 2 != 0){
                cnt++;
            }
        }
        if(cnt % 2 == 0){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}