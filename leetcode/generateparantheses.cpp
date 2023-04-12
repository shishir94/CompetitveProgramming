/*
Approach ::
let's suppose that n=3; open brackets =3 and close brackets =3;
shurat open bracket se karni h ---> s = s+'('; ---> open brackets--;

uske baad hamare pass do open bacche ya to close bracket laga de ya phir open brackets is laga de.
agar openbrackets equal ho jaye close brackets ke to ham sirf open brackets hi laga sakte h
openbrackets ka count 0 ho gaya to hum sirf close brackets hi laga sakte h or viceversa.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string out,int open,int close,vector<string>&ans){
    if(open==0&&close==0)
    {
        ans.push_back(out);
        return;
    }
    if(open==close)
    {
        string out1 = out;
        out1.push_back('(');
        solve(out1,open-1,close,ans);
    }
    else if(open ==0)
    {
        string out1 = out;
        out1.push_back(')');
        solve(out1,open,close-1,ans);
    }
    else if(close ==0)
    {
        string out1 = out;
        out1.push_back('(');
        solve(out1,open-1,close,ans);
    }
    else
    {
        string out1 = out;
        string out2 = out;
        out1.push_back('(');
        out2.push_back(')');
        solve(out1,open-1,close,ans);
        solve(out2,open,close-1,ans);
    }

}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int open = n;
    int close = n;
    string out = "";
    vector<string>ans;
    solve(out,open,close,ans);
}
return 0;
}