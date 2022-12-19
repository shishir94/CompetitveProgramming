#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string x[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>x[i][j];
        }
    }  
    int cnt = 0;                 
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(x[i][j] == "*"){
                cnt++;
            }    
        }
    }
    if(cnt >=1){
        cout<<"2"<<endl;
    }else{
        cout<<"1"<<endl;
    }
}
return 0;
}