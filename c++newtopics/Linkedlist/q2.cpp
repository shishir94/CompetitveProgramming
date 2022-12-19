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
    cout<<endl;
}


bool present(Node*head,int x){
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==x){
            return true;
        }
        temp = temp->next;
    }
    return false;
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
cout<<present(head,7)<<endl;
cout<<present(head,9)<<endl;
return 0;
}