#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string a,b;
    cin>>a>>b;
    string ans1 = a+b;
    int n;
    cin>>n;
    string c;
    string ans = "";
    while(n--){
        cin>>c;
        ans = ans + c;
    }
    int d = ans1.size();
    unordered_map<char,int>mp;
    for(int i = 0;i<d;i++){
        char key = ans1[i];
        mp[key]++;
    }
    int e = ans.size();
    unordered_map<char,int>mp2;
    for(int i = 0;i<e;i++){
        char key1 = ans[i];
        mp2[key1]++;
    }
    bool t1 = true;
    /*
    for(auto itr = mp2.begin(); itr != mp2.end();itr++){
        if(mp2[itr->first] > mp[itr->first]){
            t1 = false;
            break;
        }
    }*/
    //cout<<"heelo"<<endl;
    for(auto itr: mp2){
        if(itr.second > mp[itr.first]){
            t1 = false;
            break;
        }
    }
    if( t1 == false){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
return 0;
}