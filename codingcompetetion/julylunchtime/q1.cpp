#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int cnt(char x){
    char arr[5] = {'a','e','i','o','u'};
    int t = 0;
    for(int i = 0;i<5;i++){
        if(x == arr[i]){
            t = 1;
            break;
        }else{
            t = 0;
        }
    }
    return t;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
        
        bool y = false;
        int arr[n];
        for(int i = 0;i<n;i++){
            arr[i] = cnt(s[i]);
            //cout<<arr[i]<<" ";
        }
        //cout<<endl;
        int i = 0;
    while(i < n){
        int p = 1;
        while(arr[i] == arr[i+1] && arr[i] == 0 && i < n){
            p++;
            i++;
        }
        if(p >3){
            y = true;
            break;
        }
        i++;
    }
    if(y){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}