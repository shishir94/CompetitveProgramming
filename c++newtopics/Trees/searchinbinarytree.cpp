#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
};


Node* newNode(int val){
    Node* temp = new Node;
    temp->data = val;
    temp->left=temp->right = NULL;
    return temp;
}


bool search(Node* node,int x){
    if(node == NULL){
        return false;
    }
    if(node->data == x){
        return true;
    }
    bool v = search(node->left,x);
    if(v){
        return v;
    }
    bool u = search(node->right,x);
    return u;
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);
cout<<search(root,9)<<endl;

return 0;
}