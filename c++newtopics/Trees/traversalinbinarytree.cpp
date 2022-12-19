// Traversal in Binary Tree.
/*
There are 3 types of traversal (Depth First Search)
1). Pre-order Traversal --->  Root ---> Left subtree ---> right subtree.    ( 7 2 1 3 4)
2). Post-order Traversal.  ---> Left subtree ---> Right Subtree ---> Root  ()
3). In-order Traversal ---> Left subtree ---> Root ---> Right subtree.

lets take an example ::  7     (This is a simple binary tree).
                        / \   
                       2   3
                      /     \
                     1       4


Breadth- First Search ::
Includes level order traversal :: Means visit the nodes level-by-level and left to right fashion.

Another Example ::
                 1 <---Root Node
                / \
               2    3
              / \  / \
             4  5  6  7   //Leaf Nodes

Pre-order Traversal : 1-2-4-5-3-6-7
In-order Traversal : 4-2-5-1-6-3-7
Post-order Traversal : 4-5-2-6-7-3-1
Level-order Traversal : 1-2-3-4-5-6-7

*/

// In-order Traversal
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

//      inorder(node->left);      // -----> For Inorder Traversal.
//      cout<<node->data<<" ";
//      inorder(node->right);

//     cout<<node->data<<" ";    ----> For Pre-order Traversal
//     pre-order(node->left);
//     pre-order(node->right);


//     post-order(node->left);       ----> Post-Order Traversal.
//     post-order(node->right);
//     cout<<node->data<<" ";

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

return 0;
}


