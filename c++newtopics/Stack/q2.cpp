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
    string A;
    cin>>A;
    stack<char>s;
    for(int i = 0;i<A.size();i++){
        if(A[i]=='{'||A[i]=='('||A[i]=='['){
            s.push(A[i]);
        }else{
            if(!s.empty()){
                char p = s.top();
                if(p == '('&&A[i]==')'||p=='{'&&A[i]=='}'||p=='['&&A[i]==']'){
                    s.pop();
                }else{
                    cout<<"0"<<endl;
                    break;
                }
            }else{
                cout<<"0"<<endl;
            }
        }
        
    }
    if(s.empty()){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
return 0;
}