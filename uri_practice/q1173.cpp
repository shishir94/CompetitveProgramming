#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10];
    for( int i = 0 ; i < 10 ; i++){
        int a = pow(2 , i);
        cout<<"N["<<i<<"] = "<<a* n<<endl;
        

    }

    return 0;
}