#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};


Node* reverse(Node* head){
    Node* temp = NULL;
    while(head!=NULL){
        Node* next = head->next;
        head->next = temp;
        temp=head;
        head = next;
    }
    return temp;
}

void push(Node** head,int val){
    Node* temp = new Node();
    temp->data = val;
    temp->next = *head;
    *head = temp;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* head = NULL;
push(&head,1);
push(&head,2);
push(&head,3);
push(&head,4);
push(&head,5);
print(head);
print(reverse(head));

return 0;
}   