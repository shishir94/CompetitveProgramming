#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};


bool iscycle(Node* head){
    if(head==NULL||head->next==NULL){
        return false;
    }
    Node* temp = head;
    unordered_map<Node*,bool>mp;
    while(temp!=NULL){
        if(mp[temp->next]==true){
            return true;
        }else{
            mp[temp]=true;
        }
        temp=temp->next;
    }
    return false;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}