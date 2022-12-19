#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

// Insert node at the beginning.
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
    cout<<endl;
}

int count(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
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
printList(head);
cout<<count(head)<<endl;
return 0;
}