// Deletion in Binary Search Tree.
/*
1). Node to be deleted is the leaf :: Simply remove it from the tree.
2). Node to be deleted has only one child.
3). Node to be deleted has two childre.
*/

// Implementation ::
// Inorder predecessor --> left tree ka rightmost child. 
// Inorder successor ---> left tree ka leftmost child.
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


Node* inorderSucc(Node* root){
        Node* curr = root;
        while(curr && curr->left != NULL){
            curr = curr->left;
        }
        return curr;
}

Node* deleteNode(Node* root ,int val){
    if(root == NULL){
        return root;
    }
    else if(root->data > val){
        root->left = deleteNode(root->left,val);

    }else if(root->data < val){
        root->right = deleteNode(root->right,val);

    }else{
        if(root->left == NULL && root->right == NULL){
            return NULL;

        }else if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        
        }else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
    }
    return root;
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
deleteNode(root,4);
inorder(root);
cout<<endl;
deleteNode(root,7);
inorder(root);
return 0;
}