#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int arr[a-1];
    int sum = 0;
    for(int i = 0;i<a-1;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    int d = b*a-sum;
    if(d >= 0){
        cout<<d<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
return 0;
}