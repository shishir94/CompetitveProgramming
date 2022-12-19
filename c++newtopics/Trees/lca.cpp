#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node* left;
    Node* right;
    int data;
};


// Check whether the given nodes are present or not.
bool find(Node* root ,int x){
    if(root == NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    bool c = find(root->left,x);
    if(c){
        return c;
    }
    bool v = find(root->right,x);
    return v;
}


// check whether both the nodes lies on the left subtree or not.
bool findonleft(Node* root ,int x){
    if(root==NULL){
        return false;
    }
    if(root->data ==x ){
        return true;
    }
    bool c = findonleft(root->left,x);
    if(c){
        return c;
    }
    bool v = findonleft(root->right,x);
    return v;
}


Node* newNode(int val){
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


// Printing of tree.
void printInorder(Node* root){
    if(!root){
        return;
    }
    printInorder(root->left);
    cout<<" "<<root->data<<" "<<endl;
    printInorder(root->right);
}


// Creation of a binary tree.
Node* createTree(Node* root){
    Node* new1 = new Node();
    new1->left = NULL;
    new1->right = NULL;
    int val;
    cout<<"insert value for node"<<endl;
    cin>>val;
    new1->data = val;
    char st;
    cout<<"does left child of "<<new1->data<<" exits?"<<endl;
    cin>>st;
    if(st == 'y'){
        new1->left = createTree(new1->left);
    }
    char st2;
    cout<<"does right child of "<<new1->data<<" exits?"<<endl;
    cin>>st2;
    if(st2 == 'y'){
        new1->right = createTree(new1->right);
    }
    return new1;
}

// finding the LCA of two given nodes. 
int lca(Node* root ,int x,int y){
    bool h = findonleft(root->left,x);
    bool j = findonleft(root->left,y);
    if(h!=j){
        return root->data;  // if both the nodes are on the different sides return the data of the root.
    }
    if(root->data ==x||root->data==y){
        return root->data;
    }

    if(h==j&&h==0){
        return lca(root->right,x,y);  // checks whether they both lies on the right subtree or not.
    }
    if (h==j &&h==1){
        return lca(root->left,x,y);   // checks whether they both lies on the left subtree or not.
    }

}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    Node* root1 = new Node();
    root1->left = NULL;
    root1->right = NULL;
    Node* root = createTree(root1);
    printInorder(root);

    int x , y;
    cin>>x>>y;
    bool c = find(root,x);
    bool k = find(root,y);
    if(c==false||k==false){
        cout<<"-1"<<endl;
    }else{
        cout<<lca(root,x,y)<<endl;
    }
}
    
return 0;
}