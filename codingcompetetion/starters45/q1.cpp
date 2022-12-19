#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string fun3(int n){
    string num = "";
    int a = n;
    while(a){
        //cout<<a<<" "<<num<<endl;
        int x = a%2;
        num =num + to_string(x);
        a = a/2;
    }
    int y = num.size();
    string num2 ;
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
    int n , a, b;
    cin>>n>>a>>b;
    string s = fun3(a);
    string x = fun3(b);
    if(a == 0){
        s = "0";
    }
    if(b == 0){
        x = "0";
    }
    cout<<s<<" "<<x<<endl;
    long long sum = 0;
    int f = max(s.size(),x.size());
    for(int i = 0;i<f;i++){
        if(s[i] == x[i] && s[i] == '0'){
            sum = sum + pow(2,f-1-i);
        }
    }
    cout<<x[f-1]<<endl;
    cout<<f<<" "<<sum<<endl;
    int d;
    for(int i = 0;i<f;i++){
        if(s[i] != x[i]){
            if(s[i] == '0'){
                d = i;
                sum = sum + pow(2,f-1-d);
                break;
            }
        }
    }
      cout<<d<<endl;
    cout<<sum<<endl;
    
    for(int i = d+1;i<f;i++){
        if(s[i] == '1' && x[i] == '0'){
            sum = sum + pow(2,f-1-i);
        }
    }
    cout<<sum<<endl;
}
return 0;
}