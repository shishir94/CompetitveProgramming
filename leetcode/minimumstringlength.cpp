#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    stack<char>s1;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s1.empty()){
            s1.push(s[i]);
        }else if(s[i] == 'B'){
            char w = s1.top();
            if(w == 'A'){
                s1.pop();
            }else{
                s1.push(s[i]);
            }
        }else if(s[i] == 'D'){
            char y = s1.top();
            if(y == 'C'){
                s1.pop();
            }else{
                s1.push(s[i]);
            }
        }else{
            s1.push(s[i]);
        }
    }
    cout<<s1.size()<<endl;
}
return 0;
}