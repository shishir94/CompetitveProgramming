/*

Multisets are somewhat similar to sets but in multisets multiple elements can have same values.
Some operations are ::
1) begin() = returns an iterator to the first element of the multiset -----> O(1)
2) end() = returns an iterator to the last element of the multisets.----> O(1)
3) size() = returns the size of the multiset.---> O(1)
4) insert = insert an element in the multiset.---O(log n)
5) max_size() = returns the maximum number of element that multisets can hold.----> O(1)
6) clear() = removes all the elements from the multisets.---> O(n)
7) erase(x) = removes all the occurences of x from the multiset--->O(log n)
8) empty() = returns whether the multiset is empty or not.--->O(1)

*/
// Implementation
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
multiset<int,greater<int>>m;
m.insert(10);
m.insert(10);
m.insert(20);
m.insert(50);
m.insert(10);
m.insert(100);
m.insert(1009);
m.insert(20);
m.insert(100);
m.insert(101);
m.insert(110);
// for(auto i = m.begin();i!=m.end();i++){
//     cout<<*i<<" ";
// }
// cout<<endl;
multiset<int>f;
f.insert(m.begin(),m.end());
for(auto i = f.begin();i!=f.end();i++){
    cout<<*i<<" ";
}
cout<<endl;
// f.clear();
// for(auto i = f.begin();i!=f.end();i++){
//     cout<<*i<<" ";
// }
// cout<<endl;
// cout<<f.empty()<<endl;
m.erase(10);
for(auto i = m.begin();i!=m.end();i++){
    cout<<*i<<" ";
}
// cout<<endl;
// m.erase(m.find(20));    // removes only one occurence of element 20.
// for(auto i = m.begin();i!=m.end();i++){
//     cout<<*i<<" ";
// }
// cout<<endl;
return 0;
}