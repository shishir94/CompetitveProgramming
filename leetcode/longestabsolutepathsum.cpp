#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string input;
    cin>>input;
    int n = input.size();
    // int start =0;
    // int ans =0;
    // unordered_map<int,int>mp;
    // while(start < n){
    //     int end = input.find('\n',start);
    //     if(end == string :: npos){
    //         end = n;
    //     }
    //     string data = input.substr(start,end-start);
    //     int tab = data.find_first_not_of('\t');
    //     string filename = data.substr(tab);
    //     if(tab == 0){
    //         mp[tab] = filename.size();
    //     }else{
    //         mp[tab] = mp[tab-1]+1+filename.size();
    //     }
    //     if(filename.find('.')!=string::npos){
    //         ans = max(ans,mp[tab]);
    //     }
    //     start = end+1;
    // }
    // cout<<ans<<endl;
    vector<string>v;
    int i=0;
    string ans = "";
    while(i!=n){
        while(input[i]!='n'){
            ans += input[i];
            i++;
        }
        cout<<ans<<endl;
        ans.pop_back();
        v.push_back(ans);
        ans ="";
        i++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}