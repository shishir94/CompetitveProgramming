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
    string A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    stack<int>s;
    for(int i=0;i<n;i++){
        if(A[i]=="+"||A[i]=="*"||A[i]=="/"||A[i]=="-"){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            int val;
            if(A[i]=="+"){
                val = a+b;
            }
            else if(A[i]=="-"){
                val = b-a;
            }
            else if(A[i]=="/"){
                val = b/a;
            }
            else{
                val = a*b;
            }
            s.push(val);
        }else{
            s.push(stoi(A[i]));
        }
    }
    cout<<s.top()<<endl;
}
return 0;
}