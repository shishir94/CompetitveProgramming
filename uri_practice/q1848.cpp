#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int cnt = 0;
    int sum = 0;
    while( cnt < 3){
        getline(cin,a);
        //int y = a.size();
        if( a== "caw caw"){
            cnt++;
            cout<<sum<<endl;
            sum = 0;
        }else{
            int val = 0;
            for( int i = 0 ; i < 3 ; i++){
                if( a[i] == '*'){
                    val = val + pow( 2 , 2-i);
                }
            }
            sum = sum + val;
        }
    }
    return 0;
}