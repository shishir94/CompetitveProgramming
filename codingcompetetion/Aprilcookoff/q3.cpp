#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x;
    cin>>x;
    int n = x.size();
    int cnt = 0;
    for(int i = 0;i<n;i++){
       if((x[i]-'0') % 2!= 0){
            cnt++;
        }
    }
   // cout<<cnt<<endl;
   if(cnt % 2 == 0){
        int y = stoi(x);
        int z = y+1;
       // cout<<z<<endl;
        string s = to_string(z);
        int s1 = s.size();
        int cnt2 = 0;
        for(int i = 0;i<s1;i++){
            if((s[i] -'0') % 2 != 0){
                cnt2++;
            }
        }
        //cout<<cnt2<<endl;
        if(cnt2 %2 != 0){
            cout<<s<<endl;
        }else{
            int y = stoi(x);
            y = y+2;
            cout<<y<<endl;
        }
    }else{
        int y = stoi(x);
        int z = y+1;
        //cout<<z<<endl;
        string s = to_string(z);
        int s1 = s.size();
        int cnt2 = 0;
        for(int i = 0;i<s1;i++){
            if((s[i] -'0') % 2 != 0){
                cnt2++;
            }
        }
        //cout<<cnt2<<endl;
        if(cnt2 %2 == 0){
            cout<<s<<endl;
        }else{
            int y = stoi(x);
            y = y+2;
            cout<<y<<endl;
        }
    }   
}
return 0;
}