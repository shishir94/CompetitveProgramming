// Creation and Traversal of Linked lists.
/*
Program of creating linkedlist having 3 nodes.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node* next;
};


void LinkedlistTraversal(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* head = NULL;
Node* second = NULL;
Node* third = NULL;

// allocating 3 nodes in a heap.
head = new Node();
second = new Node();
third = new Node();   // Three blocks are created having head,second,third as there pointer.

head->data = 1;  // assign data to the first node
head->next = second; // Link first node with the second node.

second->data = 2;  // assign data to the second node.
second->next = third; // Link second node to third node.

third->data = 3;  // assign data to the third node
third->next = NULL; // end of the linked list.


LinkedlistTraversal(head);

return 0;
}