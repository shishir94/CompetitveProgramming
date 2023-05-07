#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    vector<int>v0;
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
    int n;
    cin>>n;
    while(n--){
        int x;
        string s;
        cin>>x;
        cin>>s;
        
        if(s == "00"){
            v0.push_back(x);
        }
        if(s == "01"){
            v1.push_back(x);
        }
        if(s == "10"){
            v2.push_back(x);
        }
        if(s == "11"){
            v3.push_back(x);
        }
    }
    // for(int i=0;i<v0.size();i++){
    //     cout<<v0[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<v3.size();i++){
    //     cout<<v3[i]<<" ";
    // }
    // cout<<endl;
    sort(v0.begin(),v0.end());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    if(v3.size()== 0 && (v1.size()==0 || v2.size()==0)){
        cout<<"-1"<<endl;
    }else if(v3.size()==0){
        cout<<v1[0]+v2[0]<<endl;
    }else if(v1.size()==0 || v2.size()==0){
        cout<<v3[0]<<endl;
    }else{
        cout<<min(v1[0]+v2[0],v3[0])<<endl;
    }
}
return 0;
}