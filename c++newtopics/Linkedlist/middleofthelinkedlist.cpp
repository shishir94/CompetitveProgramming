#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int count(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    int ans = 0;
    if(cnt%2!=0){
        Node* temp1 = head;
        for(int i=0;i<cnt/2;i++){
            temp1 = temp1->next;
        }
        ans = temp1->data;
     //   return temp1->data;
    }else{
        Node* temp1 = head;
        for(int i=0;i<(cnt/2);i++){
            temp1 = temp1->next;
        }
        ans = temp1->data;
       // return ans;
    }
    return ans;
}
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* head = NULL;
//push(&head, 6); 
push(&head, 5); 
push(&head, 4); 
push(&head, 3); 
push(&head, 2);
push(&head, 1);
cout<<count(head)<<endl;
return 0;
}