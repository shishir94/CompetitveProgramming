#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt1 = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '0'){
            cnt1++;
        }else{
            cnt++;
        }
    }
    int x = abs(cnt-cnt1);
    if(x % k == 0){
        cout<<x/k<<endl;
    }else{
        cout<<x/k+1<<endl;
    }

}
return 0;
}