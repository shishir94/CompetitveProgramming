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


void inorder(Node* node){
    if(node == NULL){
        return;
    }

    inorder(node->left);      
    cout<<node->data<<" ";
    inorder(node->right);
}


bool isSameTree(Node* n , Node* p){
    if(n==NULL&&p==NULL){
        return true;
    }
    if(n==NULL||p==NULL){
        return false;
    }
    bool v = isSameTree(n->left,p->left);
    if(v==false){
        return v;
    }
    return isSameTree(n->right,p->right);
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

Node* root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);
inorder(root);
cout<<endl;


Node* roo = newNode(1);
roo->left = newNode(2);
roo->right = newNode(3);
roo->left->left = newNode(4);
roo->left->right = newNode(5);
inorder(roo);
cout<<endl;


cout<<isSameTree(root,roo)<<endl;

return 0;
}