#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // functons in unordered set are insert(),size(),clear(),find(),erase();count().
    // duplicatevalues are not allowed 
    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(14);
    s.insert(12);
    s.insert(10);
    for(auto it = s.begin();it != s.end();it++){ // iterator 
        cout<<(*it)<<endl;
    }
    cout<<"no of elements "<<s.size()<<endl;

    s.clear();
    cout<<"no of elements "<<s.size()<<endl;

    int key = 14;
    if(s.find(key)== s.end()){
        cout<<"Key not found"<<endl;
    }else{
        cout<<"key found"<<endl;
        auto temp = s.find(key);
        s.erase(temp);
    }
    int deleted_key = 14;
    s.erase(deleted_key);
    for(auto it = s.begin();it != s.end();it++){ 
        cout<<(*it)<<endl;
    }  
    
    cout<<"no of elements "<<s.size()<<endl;


    if(s.find(key) != s.end())
        cout<<"key found "<<endl;



    if(s.count(5))    
        cout<<"key found"<<endl;
     else{
         cout<<"not found"<<endl;
     }   
    return 0;
}