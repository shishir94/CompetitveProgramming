#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b;
        long long arr[b];
        for(int i = 0;i<b;i++){
            cin>>arr[i];
        }
        int cnt = 0;
        if(arr[0] != arr[1]){
            cnt++;
        }
        if(arr[b-1] != arr[b-2]){
            cnt++;
        }
        for(int i = 1;i<b-1;i++){
            if((arr[i] != arr[i-1] || arr[i] != arr[i+1] )&& i+1 < b){
                cnt++;
            }
        }
    cout<<cnt<<endl;
    }
    return 0;
}