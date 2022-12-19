#include<iostream>
using namespace std;

int main(){
    int a;
    string b ,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        int x = b.size();
        int y = c.size();
        int cnt = 0;
        for(int i = 0 ;i<y;i++){
            for(int j = 0;j<x;j++){
                if(c[j] == b[i]){
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}