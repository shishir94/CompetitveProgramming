#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    long long cnt = 0,cnt1=0,cnt2=0,cnt3=0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'R'){
            cnt++;
        }else if(s[i] == 'L'){
            cnt1++;
        }else if(s[i] == 'U'){
            cnt2++;
        }else if(s[i] == 'D'){
            cnt3++;
        }
    }
    long long x , y;
    cin>>x>>y;
    long long  q;
    cin>>q;
    while(q--){
        long long x1,y1;
        cin>>x1>>y1;
        long long ansR =0,ansL=0,ansU=0,ansD = 0,ans = 0;
        if(x1 > x){
            ansR = x1-x;
            ans  +=ansR;
        }else{
            ansL = x-x1;
            ans+=ansL;
        }
        if(y1 > y){
            ansU = y1-y;
            ans+=ansU;
        }else{
            ansD = y - y1;
            ans+=ansD;
        }
        if(ansR > cnt || ansL > cnt1 || ansD > cnt3 || ansU > cnt2 ){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES "<<ans<<"\n";
        }
    }
    
}
return 0;
}