#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
};

bool checkexists(Node* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    bool f = checkexists(root->left,x);
    if(f==true){
        return true;
    }
    bool g = checkexists(root->left,x);
    return g;
}

bool find(Node* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return root->data;
    }
    bool c = find(root->left,x);
    if(c){
        return c;
    }
    bool v = find(root->right,x);
    return v;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){

}
return 0;
}