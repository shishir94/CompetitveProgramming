// Recursion :: Calling of function inside function until base condition is not reached.
// Factorial fo a number :: 
/*

6! = 6*5*4*3*2*1 = 720.
0! = 1
1! = 1
n! = n*(n-1)!
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n== 0 || n == 1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}
return 0;
}

/*
Fabonnici Series :: 0,1,1,2,3,5,8,13.....
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}
return 0;
}