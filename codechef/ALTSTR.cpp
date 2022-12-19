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
    for(int i = 0;i<n;i++){
        if(x[i] == '1'){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    if(cnt1 != cnt2){
        long long ans = 2*min(cnt1,cnt2)+1;
        cout<<ans<<endl;
    }else{
        cout<<n<<endl;
    }
}
return 0;
}