#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};


void push(Node** head , int val){
    Node* temp = new Node();  
    temp->data = val;  
    temp->next = (*head); 
    * head = temp; 
}


void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int len(Node* head){
    int count = 0;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}

Node* reverseKgroups(Node* head,int k){
    int l = len(head)/k;
    Node* temp = NULL;
    Node* current = head;
    stack<Node*>s;
    int o=0;
    while(current!=NULL&&o<l){
        int count = 0;
        while(current!=NULL&&count<k){
            s.push(current);
            current=current->next;
            count++;
        }
        o++;
        while(s.size()>0){
            if(temp==NULL){
                temp=s.top();
                head=temp;  
                s.pop();
            }else{
                temp->next=s.top();
                temp=temp->next;
                s.pop();
            }
        }
    }
    if(current==NULL){
       temp->next=NULL;
    }else{
        while(current!=NULL){
            temp->next=current;
            temp=temp->next;
            current=current->next;
        }
    }
    return head;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* head = NULL;
push(&head,5);
push(&head,4);
push(&head,3);
push(&head,2);
push(&head,1);
print(head);
print(reverseKgroups(head,5));
return 0;
}