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
    return;
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
    int cnt1 = 0;
    while(temp != NULL){
        cnt1++;
        temp = temp->next;
    }
    return (cnt1);
}

void del(Node*&head){
    Node* temp = head;
    head = head->next;
    delete(temp);
    return;
}

void del3(Node*&head , int x){
    if(count(head)>1){
        while(head->data == x && head->next != NULL){
            Node*temp = head;
            head = head->next;
            delete(temp);
        }
        Node* temp = head;
        Node* temp1 = temp->next;
        while(temp->next!=NULL){
            if(temp1->data != x){
                temp = temp->next;
                temp1 = temp1->next;
            }else{
                temp->next = temp1->next;
                delete(temp1);
                temp1 = temp->next;
            }
        }
        int v = count(head);
        if(v==1){
            if(head->data == x){
                del(head);
            }
        }
        

    }else if(count(head)==1){
        if(head->data == x){
            del(head);
        }
    }

    return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* head = NULL;
push(&head,2);
push(&head,1);
// push(&head,6);
// push(&head,7);
// push(&head,9);
// push(&head,9);
// push(&head,9);
// push(&head,19);
printList(head);

del3(head,1);
printList(head);

return 0;
}