#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Trie{
public:
    bool is_word=0;
    Trie* child[26];
};  

void insert(string word,Trie* root) {
    int size = word.size();
    int k=0;
    Trie* curr = root;
    for(int i=0;i<size;i++){
        int k = word[i]-'a';
        if(curr->child[k]==NULL){
            curr->child[k]=new Trie();
        }
        curr = curr->child[k];
    }
    curr->is_word=true;
}
    
bool search(string word,Trie* root) {
    int size= word.size();
    int k=0;
    Trie* curr = root;
    for(int i=0;i<size;i++){
        k = word[i]-'a';
        curr=curr->child[k];
        if(curr==NULL){
            return false;
        }
    }
    return curr->is_word;
}

bool find(string &s,int x,int n,Trie* root){
    for(int i=x;i<n;i++){
        string str = s.substr(x,i-x+1);
        if(search(str,root)){
            
        }
    }
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n;
    cin>>n;
    string wordDict[n];
    Trie* root = new Trie();
    for(int i=0;i<n;i++){
        cin>>wordDict[i];
        insert(wordDict[i],root);
    }
}
return 0;
}