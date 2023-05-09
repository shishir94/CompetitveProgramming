#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int fun(string beginWord,string endWord , vector<string>& wordList){
    int n = wordList.size();
    int ans =1;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        mp[wordList[i]]++;
    }
    if(mp.find(endWord)==mp.end()){
        return 0;
    }
    queue<string>q;
    map<string,int>mp1;
    mp1[beginWord]=1;
    q.push(beginWord);
    while(!q.empty()){
        int s = q.size();
        for(int i=0;i<s;i++){
            string f = q.front();
            q.pop();
            if(f == endWord){
                return ans;
            }
            for(int j=0;j<f.size();j++){
                for(char k = 'a';k<='z';k++){
                    string nw = f;
                    nw[j]=k;
                    if(mp.find(nw)!= mp.end() && mp1.find(nw)==mp1.end()){
                        mp1[nw]=1;
                        q.push(nw);
                    }
                }
            }
        }
        ans++;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string beginWord,endWord;
    cin>>beginWord>>endWord;
    int n;
    cin>>n;
    vector<string>wordList;
    for(int i=0;i<n;i++){
        string f;
        cin>>f;
        wordList.push_back(f);
    }
    cout<<fun(beginWord,endWord,wordList)<<endl;
}
return 0;
}   