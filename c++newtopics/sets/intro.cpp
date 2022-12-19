/*
In set each element needs to be unique and the elements are stored in a particular manner i.e, in either ascending or
descending order.
In unordered_set order is not fixed.
Syntax :: set<value type>setname
set<data type,greater<datatype>>setname is used to store values in set in descending order.

Some operations are ::
1) setname.size() = returns the size of the set.
2) begin() = returns an iterator at the first element of thes et.
3) end() = returns an iterator at the last element of the set. 
4) empty() = returns whether the set is empty or not.
5) max_size() = returns the maximum number of that the set can hold.
6) swap = This function is used to exchange the contents of two sets but the sets must be of the same type, although 
        sizes may  differ.

Note :: Time complexities for insertion and deletion is O(log n).

*/
// Implementation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
set<int>s;
s.insert(10);
s.insert(11);
s.insert(12);
s.insert(12);
for(auto itr=s.begin();itr!=s.end();itr++){
    cout<<*itr<<" ";
}
cout<<endl;
return 0;
}

//  Some examples ::

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    set<int,greater<int>>s1;
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
    s1.insert(50);
    s1.insert(10);
    cout<<"s1 set"<<endl;
    for(auto itr = s1.begin();itr!=s1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"set s2"<<endl;
    set<int>s2(s1.begin(),s1.end());   // the elements of s1 are also the elements of s2
    s2.erase(s2.begin(),s2.find(30));   // remove all elements up to 30 in s2
    for(auto itr = s2.begin();itr!=s2.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
  //  set<int>s2;
    s2.erase(50);   // erase the element 50 from the bus.
    cout<<"New s2"<<endl;
    for(auto itr = s2.begin();itr!=s2.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    
    
    cout<<*s2.lower_bound(40)<<endl;  // returns the lower bound of mess community.
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : \n"
        << *s2.upper_bound(40) << endl;
}   
return 0;
}

// /*
// Some other operations ::
// 1) rbegin() = Syntax = reverse_iterator setname.rbegin()
//         It returns a reverse iterator pointing to the last element in the container.

// 2) rend() = Syntax = reverse_iterator set_name.rend()
// */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = { 14, 12, 15, 11, 10 };
    set<int> s(arr, arr + 5);    // set s == {10,11,12,13,14,15}
    set<int>::reverse_iterator rit;    // syntax
    // prints all elements in reverse order
    for (rit = s.rbegin(); rit != s.rend(); rit++){
        cout << *rit << " ";
    }
    cout << "\nThe last element in set is " << *(s.rbegin());
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = { 4, 3, 5, 1, 2 };
    set<int> s(arr, arr + 5);             // set s == {1,2,3,4,5}
    set<int>::reverse_iterator rit;
    // prints all elements in reverse order
    for (rit = s.rbegin(); rit != s.rend(); rit++)
        cout << *rit << " ";
    return 0;
}

// /*
// 3) crbegin() = returns a constant iterator at the last element of the set.
//                Syntax = constant_iterator set_name.crbegin();
// 4) crend() = returns a constant iteratorjust before the first element of the set.
//              Syntax = constant_iterator set_name.crend();
// Time complexity = O(1).

// 5)cbegin() = returns the constant iterator at the first position.
// 6)cend() = returns the constant iterator at the last position of the set.

// We can use two parameters in insert operation.
// Synatx = iterator set_name.insert(iterator position, element)

// Example :-
// set<int>s;
// set<int>s1(s.find(1),s.end())
// set s1 consists of the elements of set s from 1 to last element of the set s.

// 7) set_name.erase() = erase the particular element from the set or returns a set of numbers from the set.
// exmaple set s = {1,2,3,4,5,6,7}

// s.erase(2) then set s is {1,2,4,5,6,7};   time complexity = amortized constant
// s.erase(2,5) then set s is {1,2,7};    time complexity = O(n);
// */

// // Given a set of integers, remove all the even elements from the set and print the set.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    set<int>s{1,2,3,4,5,6,7,8,9,10,11,12};
    for(auto i = s.begin();i!=s.end();i++){
        if(*i%2==0){
            i = s.erase(i);
        }
    }
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}
return 0;
}

/*
set_name.find(g) = returns an iterator to the element g if its found else at the end. 
                  Time complexity = O(log n)
set_name.cout(g) = returns whether element g is present in a set or not.

set_name.lowerbound(x) = returns an element x if it is present in the set else it returns the element just greater than x in
              the set and if x is greater than the greatest element in the set then the iterator returned points to the 
              element beyond last element in the set container.  

set_name_upperbound(x) = returns the element just greater than x in the set and if x is greater than the greatest element in 
              the set then the iterator returned points to the element beyond last element in the set container.
*/