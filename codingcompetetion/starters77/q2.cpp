#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    int x = abs(a-b);
    int y = abs(b-c);
    int d = abs(c-a);
    if(x%2!=0||y%2!=0||d%2!=0){
        cout<<"-1"<<endl;
    }else{
        int cnt =0;
        while(true){
            if(a==b&&b==c){
                break;
            }else{
                int ans = max(a,max(b,c));
                int o;
                int p;
                if(ans == a){
                    o = ans-b;
                    p = ans-c;
                }else if(ans == b){
                    o = ans-a;
                    p = ans-c;
                }else{
                    o = ans-b;
                    p = ans-a;
                }
                int y = min(o,p);
                y = y/2;
                cnt+=y;
                if(ans == a){
                    a = a-y;
                    b+=y;
                    c+=y;
                }
                if(ans == b){
                    b=b-y;
                    c+=y;
                    a+=y;
                }else{
                    c=c-y;
                    a+=y;
                    b+=y;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
return 0;
}