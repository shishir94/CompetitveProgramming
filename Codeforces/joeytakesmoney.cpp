#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    long long sum =1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum*arr[i];
    }
    sum = sum+(n-1);
    long long y = sum*2022;
    cout<<y<<endl;

}
return 0;
}