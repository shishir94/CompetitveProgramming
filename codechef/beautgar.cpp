#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x;
    cin>>x;
    x =+ x[0];
    int y = x.size();
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0;i<y;i++){
        if(x[i] == x[i+1]){
            if(x[i] == 'R'){
                cnt1++;
            }else{
                cnt2++;
            }
        }
    }
    if(cnt1== 0 && cnt2 == 0 || cnt1 == 1 && cnt2 == 1){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
return 0;
}