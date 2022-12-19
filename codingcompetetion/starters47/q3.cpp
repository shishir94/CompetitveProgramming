#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string same_string(string s,int l){
    for(int i = 0;i<=l;i++){
        if(s[i] != s[i+l+1]){
            return "False";
        }
    }
    return "True";
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
    int i = n-1;
    bool t = true;
    while(i!=0){
        if(i%2 ==0){
            i--;
        }else{
            int l = i/2;
            string x = same_string(s,l);
            if(x == "True"){
                i = i-(l+1);
                t = true;
            }else{
                t = false;
                break;
            }
        }
        if(t == false){
            break;
        }
    }
    if(t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}