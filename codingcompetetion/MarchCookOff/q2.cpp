#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    int arr[3];
    for(int i = 0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    long long sum = (x-1)*arr[0]+1*arr[1];
    cout<<sum<<endl;
}
return 0;
}