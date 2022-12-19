#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    string temp = "Yes";
    for(int i=0;i<s.size();i++){
        if(s[i]!=temp[i%3]){
            return "NO";
        }
    }
    return "YES";
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    s = s[0]=='Y'?s:s[0]=='e'?s.substr(2):s.substr(1);
    cout<<solve(s)<<endl;
    // if(s.size()==1){
    //    if(s[0]=='Y'||s[0]=='e'||s[0]=='s'){
    //         cout<<"YES"<<endl;
    //     }else{
    //         cout<<"NO"<<endl;
    //     }
    // }else{
    //     if(s[0]!='Y'&&s[0]!='e'&&s[0]!='s'){
    //         cout<<"NO"<<endl;
    //     }else if(s[0]=='Y'){
    //         bool f = true;
    //         for(int i=0;i<s.size();i++){
    //             if(i%3==0&&s[i]!='Y'){
    //                 f=false;
    //                 break;
    //             }else if(i%3==1&&s[i]!='e'){
    //                 f=false;
    //                 break;
    //             }else if(i%3==2&&s[i]!='s'){
    //                 f=false;
    //                 break;
    //             }
    //         }
    //         if(f){
    //             cout<<"YES"<<endl;
    //         }else{
    //             cout<<"NO"<<endl;
    //         }
    //     }else if(s[0]=='e'){
    //         if(s[1]!='s'){
    //             cout<<"NO"<<endl;
    //         }else if(s[1]=='s'){
    //             bool y = true;
    //             for(int i=2;i<s.size();i++){
    //                 if(i%3==2&&s[i]!='Y'){
    //                     y=false;
    //                     break;
    //                 }else if(i%3==0&&s[i]!='e'){
    //                     y=false;
    //                     break;
    //                 }else if(i%3==1&&s[i]!='s'){
    //                     y=false;
    //                     break;
    //                 }else{
    //                     y=true;;
    //                 }
    //             }
    //             // cout<<y<<endl;
    //             if(y){
    //                 cout<<"YES"<<endl;
    //             }else{
    //                 cout<<"NO"<<endl;
    //             }
    //         }
    //     }else if(s[0]=='s'){
    //             bool g = true;
    //             for(int i=1;i<s.size();i++){
    //                 if(i%3==1&&s[i]!='Y'){
    //                     g=false;
    //                     break;
    //                 }else if(i%3==2&&s[i]!='e'){
    //                     g=false;
    //                     break;
    //                 }else if(i%3==0&&s[i]!='s'){
    //                     g=false;
    //                     break;
    //                 }
    //             } 
    //             if(g){
    //                 cout<<"YES"<<endl;
    //             }else{
    //                 cout<<"NO"<<endl;
    //             }
    //     }
    // }
}
return 0;
}