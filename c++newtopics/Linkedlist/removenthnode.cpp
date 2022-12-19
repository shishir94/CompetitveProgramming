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


int count(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void del3(Node*&head , int data){
    int n = count(head);
    if(n==data){
         Node* temp = head;
        head = head->next;
        delete(temp);
        return;
    }else if(data==1){
         Node* temp = head;
        Node* temp1 = head->next;
        while(temp1->next != NULL){
            temp = temp1;
            temp1 = temp1->next;
        }
        temp->next = NULL;
        delete(temp1);
        return;
    }else{
        Node* temp = head;
        Node* temp1 = temp->next;
        
        for(int i=0;i<n-data-1;i++){
            temp = temp->next;
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        delete(temp1);
        return;
    }
}


void print(Node* n){
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
push(&head, 5); 
push(&head, 4); 
push(&head, 3); 
push(&head, 2); 
push(&head, 1);
print(head);
del3(head,2);
print(head);
return 0;
}