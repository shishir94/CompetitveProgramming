/*
Maps stores the value in mapped fashion. har ek ki ek key value hoti h or koi bhi do mapped value ki same key value 
same nhi hoti.
Some operations ::=
1) begin() = returns an iterator at the first element.--->O(1)
2) end() = returns an iterator at the last element.---> O(1)
3) pair insert(key value , map value) = insert an element in the map ---> O(log n)
4) empty() = returns whether the map is empty or not.--->
5) size() = returns the size of the map.--->O(1)
6) erase(iterator position) = removes the element at the position pointed by the iterator.---O(n)
7) erase(const g) = removes the key-value 'g' from the map.---> O(1)
8) clear() = removes all the elements from the map.
9) find() = returns the position of the element----> O(log n)
*/
// Implementation ::
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
map<int,int>mp;
mp.insert(pair<int,int>(1,40));
mp.insert(pair<int,int>(2,50));
mp.insert(pair<int,int>(3,60));
mp.insert(pair<int,int>(4,70));
mp.insert(pair<int,int>(5,80));
mp[7] = 10;  // another way of inserting element 
//mp[7] = 20;
for(auto itr=mp.begin();itr!= mp.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
cout<<endl;
map<int,int>mp1;
mp1.insert(mp.begin(),mp.end());
for(auto itr=mp1.begin();itr!= mp1.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
cout<<endl;
cout<<mp.size()<<endl;
cout<<mp.empty()<<endl;
mp.erase(2);  // removes the key value 2.
for(auto itr=mp.begin();itr!= mp.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
cout<<endl;
mp.erase(5);   // removes the key-value 5
for(auto itr=mp.begin();itr!= mp.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
cout<<endl;
mp.erase(mp.begin(),mp.find(3));   // removes the key-value smaller than 3.
for(auto itr=mp.begin();itr!= mp.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
cout<<endl;

return 0;
}
// Note :: unordered_map is faster than map.