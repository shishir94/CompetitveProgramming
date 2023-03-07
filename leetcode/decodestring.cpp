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
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=']'){
            st.push(s[i]);
        }else{
            string ans = "";
            while(st.top()!='['){
                ans = st.top()+ans;
                st.pop();
            }
            st.pop();
            string number = "";
            while(st.size()>0 && isdigit(st.top())){
                number = st.top()+number;
                st.pop();
            }
            int x = stoi(number);
            while(x--){
                for(int p=0;p<ans.size();p++){
                    st.push(ans[p]);
                }
            }
        }
    }
    s="";
    while(st.size()>0){
        s=st.top()+s;
        st.pop();
    }
    cout<<s<<endl;
}
return 0;
}

/*
class Solution {
public:

    string decodeString(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']') {
                st.push(s[i]);
            }
            else{
                string curr_str = "";
                
                while(st.top() != '['){
                    curr_str = st.top() + curr_str ;
                    st.pop();
                }
                
                st.pop();   // for '['
                string number = "";
                
                // for calculating number
                
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                int k_time = stoi(number);    // convert string to number
                
                while(k_time--){
                    for(int p = 0; p < curr_str.size() ; p++)
                        st.push(curr_str[p]);
                }
            }
        }
        
        s = "";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
        
    }
};
*/