#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string binary(long long n){
    string s = "";
    while(n){
        int x = n %2;
        n = n/2;
        s = s+to_string(x);
    }
    return s;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long x;
    cin>>x;
    if(x%2!=0){
        cout<<"-1"<<endl;
    }else{
        long long c = x/2;
        string f = binary(c);
        long long cnt = 0;
        for(int i = 0;i<f.size();i++){
            if(f[i] == '1'){
                cnt++;
            }
        }
        if(cnt ==1){
            cout<<"-1"<<endl;
        }else{
            int d = 0;
            for(int i = 0;i<f.size();i++){
                if(f[i] == '1'){
                    d = i;
                    break;
                }
            }
            long long h = pow(2,d);
            cout<<"0 "<<c<<" "<<h<<endl;
        }
    }
}
return 0;
}