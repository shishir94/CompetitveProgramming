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
    string o;
    cin>>o;
    int cnt = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '1' && o[i] == '1'){
            cnt++;
        }else if(s[i] == '0' && o[i] == '0'){
            cnt1++;
        }else if(s[i] == '1' && o[i] == '0'){
            cnt2++;
        }else if(s[i] == '0' && o[i] == '1'){
            cnt3++;
        }
    }
    int x = min(cnt2,cnt3);
    int y = max(cnt2,cnt3);
    int f = min(cnt,y-x+cnt1);
    int ans = x+f;
    if(f == cnt){
        cout<<ans<<endl;
    }else{
        ans = ans+(cnt-f)/2;
        cout<<ans<<endl;
    }

}
return 0;
}