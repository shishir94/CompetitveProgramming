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
    string x;
    cin>>x;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    for(int i = 1;i<=n;i++){
        if(i % 2 != 0){
            if(x[i] == '0'){
                cnt1++;
            }else{
                cnt2++;
            }
        }else{
            if(x[i] == '0'){
                cnt3++;
            }else{
                cnt4++;
            }
        }
        
    }
    int k = min(cnt1,cnt4);
    int h = n/2;
    int y = min(cnt3,cnt2);
    int z = max(0,h-k-1);
    int ans = k + min(y , z);
    cout<<ans<<endl;
}
return 0;
}