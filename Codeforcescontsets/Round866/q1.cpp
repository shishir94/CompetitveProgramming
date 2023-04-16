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
    if(s.size()==1){
        if(s[0]=='^'){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }else{
        long long ans =0;
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(st.top()!=s[i]){
                st.push(s[i]);
            }else if(st.top()==s[i]){
                if(s[i]=='_'){
                    st.push('^');
                    ans++;
                    st.push(s[i]);
                }else{
                    st.push(s[i]);
                }
            }
        }
        if(s[0]=='_'){
            ans++;

        }
        if(s[s.size()-1]=='_'){
            ans++;
        }
        cout<<ans<<endl;
    }
}
return 0;
}