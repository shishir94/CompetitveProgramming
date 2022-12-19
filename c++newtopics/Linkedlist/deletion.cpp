// Deletion of node in linked lists.
/*
3 cases :
1. From the beginning.
2. From between.
3. From the end.
4. Delete a node with a given value.

*/
// Case 1:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node *node){
    while (node != NULL){
        cout<<" "<<node->data;
        node = node->next;
    }
}
// Delete a node from the beginning:-
void del(Node*&head){
    Node* temp = head;
    head = head->next;
    delete(temp);
    return;
}

// Delete a node from the end:-
void del1(Node*&head){
    Node* temp = head;
    Node* temp1 = head->next;
    while(temp1->next != NULL){
        temp = temp1;
        temp1 = temp1->next;
    }
    temp->next = NULL;
    delete(temp1);
    return;
}

// Delete a node in between.
void del3(Node*&head , int data){
    Node* temp = head;
    Node* temp1 = temp->next;
    for(int i=0;i<data-1;i++){
        temp = temp->next;
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    delete(temp1);
    return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* head = NULL;
    push(&head, 6); 
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 4); 
    push(&head, 8);
    cout<<"Created Linked list ";
    printList(head);
    cout<<endl;
    // del1(head);
    // cout<<"Created Linked list ";
    // printList(head);
    // cout<<endl;
    // del3(head,2);
    // cout<<"Created Linked list ";
    // printList(head);

return 0;
}