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
    int ans = n;
    int count = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == ')'){
            count+=1;
        }
    }
    for(int i = 0;i<n;i++){
        if(s[i] == '('){
            cnt+=1;
            ans = min(ans,n-2*min(count,cnt));
        }else{
            count = count-1;
        }
    }
    cout<<ans<<endl;
}
return 0;
}