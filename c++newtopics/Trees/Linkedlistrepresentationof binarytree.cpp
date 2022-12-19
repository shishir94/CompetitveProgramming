// Linked List representation of Binary Tree :: 
/*
there are 3 pointers in trees data , left children, right children.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = new Node(1);  // create a root node

root->left = new Node(2);
root->right = new Node(3);   
// 2 and 3 become left and right children of 1.

root->left->left = new Node(4);  // 4 becomes left child of 2.
root->left->right = new Node(5);  // 5 becomes left child of 2.

/*
Its output is ::        1
                      /   \
                      2     3
                    /  \    /  \ 
                   4    5  NULL NULL
                  / \   / \
                NULL NULL NULL NULL

*/

return 0;
}