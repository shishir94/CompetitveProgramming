#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    char arr[26];
    for(int i=0;i<26;i++){
        arr[i] = 'a' + i;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i % 26];
    }
    cout<<endl;
}
return 0;
}