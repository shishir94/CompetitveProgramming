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
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(x[i] == '1'){
            cnt++;
        }
    }
    if(cnt == 0){
        cout<<"0"<<endl;
    }else{
        int cnt1 = 0;
        for(int i = 0;i<n;i++){
            if(x[i] == '1' && x[i+1] == '1'){
                cnt1++;
            }
        }
        if(cnt1 >0){
            cout<<"2"<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }
}
return 0;
}