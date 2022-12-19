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

int ans(Node* head){
    Node* temp = head;
    int an1 = 0;
    string s ="";
    while(temp!=NULL){
        an1++;
        s+=to_string(temp->data);
        temp=temp->next;
    }
    int sum = 0;
    for(int i=0;i<s.size();i++){
        sum+=pow(2,s.size()-1-i)*((s[i]-'0'));
    }
    return sum;
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* head = NULL;
push(&head, 1); 
push(&head, 0); 
push(&head, 1); 
push(&head, 1); 
// push(&head, 3); 
// push(&head, 2);
// push(&head, 1);
cout<<ans(head)<<endl;
return 0;
}