// Insertion of data in Linked Lists.
/*
Node can be insert at:
1). At the beginning
2). In between.
3). At the end.
4). insert after the node.

*/
/*
Case 1: Insert at the beginning of the linked lists.

Step1 : Point the pointer of the new data to the head of the given linked list.
Step2 : Point the head to the new node.
Time complexity is O(1) ---> constant time complexity.
*/


/*
Case 2: Insert in between.

Step1 : Link the pointer of new node to the next node.
Step2 : Link the pointer of the previous node to the new node
Time complexity is O(n).
*/


/*
Case 3: Insert at the end.

Step1: Link the pointer of the last node to the new node.
Step2 : Link the pointer of the new node to the NULL.
Time complexity is O(n).
*/


/*
Case 4: Insert after a node.
Pointer(q) is given that means we are not traversing.Let the pointer of the new node be ptr.

Step1 : Link ptr to next node.
Step2 : Link the pointer q to pointer ptr.
Time complexity  = O(1).
*/

// Code for all the cases:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

// Insert node at the beginning.
void push(Node** head , int new_data){
    Node* new_node = new Node();  // allocate new data
    new_node->data = new_data;  // assign value to it
    new_node->next = (*head); // pointing the pointer of new_node to the head
    * head = new_node; // shifting the head pointer to the new_node.
}

// Insert the node after a given node.
void InsertAfter(Node* previous,int new_data){
    // First check if the previuos node is NULL or not
    if(previous == NULL){
        return;
    }
    Node* new_node = new Node();  // allocate new data
    new_node->data = new_data;  // assign value to it
    new_node->next = previous->next;
    previous->next = new_node;
}

void end(Node** end,int new_data){
    Node* new_node = new Node();  // allocate new data
    new_node->data = new_data;  // assign value to it
    new_node->next = NULL;
    Node* last = *end;

    // if the linked list is empty.
    if(*end == NULL){
        *end = new_node;
        return;
    }
    // traverse through the linked list.
    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
    
}


// for printing the linked lists.
void printList(Node *node){
    while (node != NULL){
        cout<<" "<<node->data;
        node = node->next;
    }
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// Start with the empty list
    Node* head = NULL;
    end(&head, 6);  // Insert 6. So linked list becomes 6->NULL
    
    push(&head, 7); // Insert 7 at the beginning.So linked list becomes 7->6->NULL
    
    push(&head, 1); // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
    
    end(&head, 4); // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
    
    InsertAfter(head->next, 8); // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL

    cout<<"Created Linked list is: ";

    printList(head);
    
    cout<<endl;
return 0;
}