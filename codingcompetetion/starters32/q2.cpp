#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '0'){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    if(cnt1 == 0 || cnt2 == 0){
        cout<<"0"<<endl;
    }else{
        cout<<min(x,y)<<endl;
    }
}
return 0;
}