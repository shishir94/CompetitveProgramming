#include<iostream>
using namespace std;

int main(){
    string a;
    string e;
    int cnt =0;
    cin>>a;
    int b = a.size();
    for(int i = 0 ; i < b ;i++){
        if(a[i] == '1'){
            cnt++;
        }
    }
    if(cnt % 2 == 0){
        string e = a + "0";
        cout<<e<<endl;
    }else{
        string e = a + "1";
        cout<<e<<endl;
    }
    return 0;
}