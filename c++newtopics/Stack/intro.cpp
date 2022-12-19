/*
Stack is a linear operator. All the operation are done in a LIFO (last first out) order.
Suppose there is a basket full of iteams. Let the number of iteams be 4. Then last item will be the first one to come out.

ITS APPLICATIONS :: ---
1. USED IN FUNCTION CALLS
2. USED IN PARANTHESIS MATCHING AND MORE.

HOW TO IMPLEMENT STACKS :: - To implement stack we need a pointer to the topmost element along with the other element stored
which are stored inside the stacks. Stack can be implement using array or linked list.

OPERATIONS ON STACKS :: ---

1. push() - push the element in the stack.
2. pop() - remove the topmost element from the stack.
3. peak(index) -  value returned at a given position.
4. isEmpty/isFull() - determine whether the stack is full or empty.
5. top()  - Returns the top element of the stack.
6. size()  - Returns the size of stack.

*/
// SOME SIMPLE CODES :: 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
stack<int>stack;
stack.push(21);
stack.push(22);
stack.push(24);
stack.push(25);
//stack.push(21);
stack.pop();
stack.pop();
while(!stack.empty()){
    cout<<stack.top()<<" ";
    stack.pop();
}
cout<<endl;
return 0;
}
 

// Code to use top operator
// TIME COPMLEXITY IS O(n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
stack<int>s;
s.push(1);
s.push(10);
s.push(11);
s.push(12);
s.push(13);
cout<<s.size()<<endl;
cout<<s.top()<<endl;
int sum = 0;
if(s.empty()){
    cout<<"TRUE"<<endl;
}else{
    cout<<"FALSE"<<endl;
}
//while(!s.empty()){
while(s.size()>0){   // ANOTHER WAY TO FIND THE SUM OF ELEMENTS OF STACK.
    sum+=s.top();
    s.pop();
}

cout<<sum<<endl;
return 0;
}



// SWAP IN STACKS --
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
stack<int>s1;
stack<int>s2;

// CREATING STACK S1 ::

s1.push(1);
s1.push(2);
s1.push(3);
s1.push(4);
s1.push(5);

// CREATING STACK S2 :: 

s2.push(1);
s2.push(1);
s2.push(1);
s2.push(1);
s2.push(1);
s1.swap(s2);    // SWAP FUNCTION
cout<<"s1 ---"<<" ";
while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
}
cout<<endl;
cout<<"s2 ---"<<" ";
while(!s2.empty()){
    cout<<s2.top()<<" ";
    s2.pop();
}
cout<<endl;
return 0;
}


// EMPLACE OPERATOR :: - stackname.emplace(int d)  --- this integer will add at the first position on stack.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
stack<int>s1;

s1.emplace(1);
s1.emplace(2);
s1.emplace(3);
s1.emplace(4);
s1.emplace(5);
s1.emplace(9);
while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
}
cout<<endl;
return 0;
}