#include<iostream>
using namespace std;

string fun3(int n){
    char arr[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string num = "";
    int a = n;
    while(a){
        int x = a%16;
        num =num + arr[x];
        a = a/16;
    }
    int y = num.size();
    string num2 ;
    for( int i = 0 ; i < y  ; i++){
        num2 = num2 + num[y - i - 1];
    }
    return num2;
}

int main(){
    int n;
    cin>>n;
    cout<<fun3(n)<<endl;
    
    return 0;
}