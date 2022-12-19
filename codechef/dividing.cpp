#include<iostream>
using namespace std;

int main(){
    int n;
    long long b;
    cin>>n;
    long long ans =0;
    long long sum = 0;
    for(int i = 0;i<n;i++){
        cin>>b;
        sum = sum + b;
    }
    if(n % 2== 0){
        ans = ans+n/2;
        ans = ans*(n+1);
    }else{
        ans = ans + (n+1)/2;
        ans = ans*n;
    }
    if(sum==ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}