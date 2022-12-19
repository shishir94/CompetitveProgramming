#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string ransomNote;
    string magazine;
    cin>>ransomNote;
    cin>>magazine;
    int x = magazine.size();
    int y = ransomNote.size();
    unordered_map<int,int>mp;
    unordered_map<int,int>map;
    for(int i = 0;i<y;i++){
        mp[ransomNote[i]]++;
    }
    for(int i = 0;i<x;i++){
        map[magazine[i]]++;
    }
    bool a = true;
    for(auto itr = mp.begin();itr != mp.end();itr++){
        if(mp[itr->first] > map[itr->first]){
            a = false;
            break;
        }else{
            a = true;
        }
    }
    if(a){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}
return 0;
}