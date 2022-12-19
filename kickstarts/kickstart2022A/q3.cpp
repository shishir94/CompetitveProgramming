#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int ii=1;ii<=t;ii++){
    cout<<"Case #"<<ii<<": ";
    int n;
    cin>>n;
    string x;
    cin>>x;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(x[i] == '?'){
            cnt++;
        }
    }
    if(cnt == 2 || cnt == 4){
        cout<<"POSSIBLE"<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}
return 0;
}    