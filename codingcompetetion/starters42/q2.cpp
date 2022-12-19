#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long a;
    cin>>a;
    long long arr[a];
    for(int i = 0;i<a;i++){
        cin>>arr[i];
    }
    long long min = 1000000;
    long long max = 1;
    long long c = 0;
    for(int i=0;i<a;++i)
    { 
        if(min<arr[i]&&max>arr[i])
        ++c;
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    if(c == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}