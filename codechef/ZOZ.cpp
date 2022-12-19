#include<iostream>
using namespace std;

int main(){
    int a,n,k;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>n>>k;
        int b[n];
        int sum = 0;
        for(int i = 0;i<n;i++){
            cin>>b[i];
            sum = sum+b[i];
        }
        int cnt = 0;
        int e;
        for(int i = 0;i<n;i++){
           int d = b[i]+k;
            e = sum - b[i];
            if(d > e){
                cnt++;
            }
        }
    cout<<cnt<<endl; 
    }
    return 0;
}