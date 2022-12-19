#include<iostream>
using namespace std;

int main(){
    int n ,k,t;
    cin>>n>>k;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin>>t;
        if(t % k == 0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}