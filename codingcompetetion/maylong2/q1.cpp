#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string fun(int n){
    string num = "";
    long long a = n;
    while(a){
        //cout<<a<<" "<<num<<endl;
        long long x = a%2;
        num =num + to_string(x);
        a = a/2;
    }
    long long y = num.size();
    string num2 ;
    for(int i=0;i<(32-y);i++){
        num2 = num2 + '0';
    }
    for( int i = 0 ; i < y  ; i++){
        num2 = num2 + num[y - i - 1];
    }
    return num2;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int> s;
  
    for(int i =0;i<n;i++){
         string x = fun(arr[i]);
        //cout<<x<<endl;
        int f= x.size();
        for(int i = 0;i<32;i++){
            if(x[i] == '1'){
                int j = i;
                //cout<<i<<endl;
                s.insert(i);
            }
        }
    }
    long long h = s.size();
    cout<<h<<endl;
}    
return 0;
}