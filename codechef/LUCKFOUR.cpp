#include<iostream>
using namespace std;

int main(){
    int a;
    string b;
    cin>>a;
    for(int i = 0 ; i < a;i++){
        cin>>b;
        int c = b.size();
        int cnt = 0;
        for(int i = 0;i<c;i++){
            if(b[i] == '4'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}