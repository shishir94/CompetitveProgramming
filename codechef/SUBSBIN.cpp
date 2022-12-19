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
    string s;
    cin>>s;
    int cnt=0;
    int cnt1= 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }else{
            cnt1++;
        }
    }
    string v = s;
    if(cnt==n||cnt1==n){
        cout<<n<<" 0"<<endl;
    }
    else if(s.size()==1){
        cout<<"1"<<" 0"<<endl;
    }else{
        if(cnt == cnt1){
           cout<<"1"<<" 1"<<endl;
           cout<<"1 "<<n<<" 0"<<endl;
        }else if(cnt>cnt1){
            int d = (cnt-cnt1);
            cout<<"1 "<<d+1<<endl;
            int c = d+1;
            while(c>1){
                int a =0;
                int b =0;
               // string a = s;
                for(int i = 0;i<v.size()-1;i++){
                    if(v[i]=='0'&&v[i+1]=='1'||v[i]=='1'&&v[i+1]=='0'){
                        a =i;
                        break; 
                    }
                }
                cout<<a+1<<" "<<a+2<<" 0"<<endl;
                s = "";
                v = v.substr(0,a)+'0'+v.substr(a+2);
                c--;
              //  cout<<v<<endl;
            }
            if(c==1){
                cout<<"1"<<" "<<n-d<<" 0"<<endl;
            }
        }else{
            int d = (-cnt+cnt1);
            cout<<"1 "<<d+1<<endl;
            int c = d+1;
            while(c>1){
                int a =0;
                int b =0;
                for(int i = 0;i<v.size()-1;i++){
                    if(v[i]=='0'&&v[i+1]=='1'||v[i]=='1'&&v[i+1]=='0'){
                        a =i;
                        break; 
                    }
                }
                cout<<a+1<<" "<<a+2<<" 1"<<endl;
                s  = "";
              //  s = "";
                v = v.substr(0,a)+'1'+v.substr(a+2);
                c--;
               // cout<<v<<endl;
            }
            if(c==1){
                cout<<"1"<<" "<<n-d<<" 0"<<endl;
            }
        }
    }
}
return 0;
}