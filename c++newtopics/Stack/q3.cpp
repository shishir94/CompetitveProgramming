#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string A;
    cin>>A;
    stack<string>v;
    string res;
    int n = A.size();
    for(int i = 0;i<n;i++){
        string f = "";
        while(A[i]!='/'&&i<n){
            f.push_back(A[i]);
            i++;
        }
        if(f=="."){
            continue;
        }else if(f==".."){
            if(!v.empty()){
                v.pop();
            }
        }else if(f.size()){
            v.push(f);
        }
    }
    stack<string>st2;
    while(!v.empty()){
        st2.push(v.top());
        v.pop();
    }
    while(!st2.empty()){
        res.push_back('/');
        res+=st2.top();
        st2.pop();
    }
    if(res.size()==0) cout<< "/"<<endl;;
    cout<<res<<endl;

}
return 0;
}
