/*
There are two types of heaps::
1) Min heap = whenever we pop it we get the minimum element present in the heap.
2) Max heap = whenever we pop it we get the maximum element present in the heap.
    Here we are using priority_queue for implementing heaps(both min and max heap).

Priority_queue = specially designed in such a manner that its first element is either greatest one or minimnum one.
        or we can say that each element of queue is in fixed order.

Now demonstration of priority_queue ::
By default priority_queue is in decreasing order.
*/

// Max heap using priority_queue:=
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    priority_queue<int>g;
    g.push(10);
    g.push(11);
    g.push(6);
    g.push(12);
    g.push(1);
    g.push(4);
    while(!g.empty()){
        cout<<g.top()<<" ";
        g.pop();
    } 
}
return 0;
}

//  Min heap using priority_queue:=
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    priority_queue<int>g;
    g.push(10);
    g.push(11);
    g.push(6);
    g.push(12);
    g.push(1);
    g.push(4);
    priority_queue<int>k;
    while(!g.empty()){
        k.push(-(g.top()));
        g.pop();
    } 
     while(!k.empty()){
        cout<<-(k.top())<<" ";
        k.pop();
    } 
}
return 0;
}

// Another method of implementing min heap := 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   priority_queue<int, vector<int>, greater<int> > g;    // syntax of implementing priority_queue
   g.push(10);
    g.push(11);       // .push() = push the element at the back.
    g.push(6);
    g.push(12);
    g.push(1);
    g.push(4);
    cout<<g.size()<<endl;;   // returns the size of the priority_queue.
    cout<<g.empty()<<endl;   // returns whether the priority_queue is empty or not.
    while(!g.empty()){
        cout<<g.top()<<" ";    // returns the topmost element of the priority_queue.
        g.pop();                // delete the element from the priority_queue.
    } 
    cout<<endl;
}
return 0;
}

// Some other functions ::-
/*
1) priority_queue.swap() = swap two priority_queue provided they are of same type , size may be different.
2) priority_queue.value_type() = returns the type of the object stored as a element in priority_queue.
3) priority_queue.emplace() = insert the element in the priority_queue.

There time complexity is constant O(1) except for emplace() for that time complexity is O(log n)
*/