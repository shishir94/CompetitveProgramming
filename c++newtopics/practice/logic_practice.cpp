#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
function that will take a number as input, output will be number of digits
*/
/*int fun1(int n){
    if(n == 0){
        return 1;
    }
    int cnt = 0;
    int a = n;
    while(true){
        if( a == 0){
            break;
        }
        a = a / 10;
        cnt++;
    }
    return cnt;
}
/*
function that will take an array of integers, outtput the number formed
arr = {1,0,2,3,8} , n = 5
out = 10238
int fun2(int arr[], int n){
    int num = 0;
    for( int i = 0 ; i<n; i++){
        num = arr[i]*pow(10,n-i-1) + num;
    }
    return  num;
}

/*
function to output binary form
intput = 10
out = 1010

input = 5
out = 101
*/
string fun3(int n){
    string num = "";
    int a = n;
    while(a){
        //cout<<a<<" "<<num<<endl;
        int x = a%2;
        num =num + to_string(x);
        a = a/2;
    }
    int y = num.size();
    string num2 ;
    for( int i = 0 ; i < y  ; i++){
        num2 = num2 + num[y - i - 1];
    }
    return num2;
}

/*
function for binary to decimal
input = 1010
out = 10

intput = 101
out = 5

int fun4(string n){
    int num = 0;
    int x = n.size();
    for( int i = 0 ; i < x ; i++){
        if( n[i] == '1'){
            num = num + pow( 2,x-i-1);
        }    
    }
    //cout<<num<<endl;
    return num;
}
*/
int main(){
    int n =99;
    cout<<fun3(n)<<endl;
    return 0;
}