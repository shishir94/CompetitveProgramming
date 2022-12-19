// INSERTION IN BINARY TREE :-
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left,*right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    } 
};

Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(root->data > val){
        root->left = insertBST(root->left , val);
    }else{
        root->right = insertBST(root->right , val);
    }
    return root;

}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

Node* root = NULL;
root = insertBST(root,5);
insertBST(root,1);
insertBST(root,3);
insertBST(root,4);
insertBST(root,2);
insertBST(root,7);

inorder(root);
cout<<endl;
return 0;
}