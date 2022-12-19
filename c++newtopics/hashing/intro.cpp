/*
Hashing means storing data and retreiving data in O(1) time(linear time complexity).Also known as maping technique
TERMINILOGY IN HASHING ::
1.) Search key 
2.) Hash Table
3.) Hash Functions(k mod 10 , k mod n , Mid square , Folding Method)
Example :: Search Key = 24,52,91,67,48,83
Using K mod 10:: here k is key for example 24 mod 10 = 4 (hash value)
Mid square"""  123  square of midlle term = 2*2= 4
Folding Method :: 123456   0 - 999 this number cannot be stored in this so we use folding method i,e., 123 + 456 = 578.
There are two keys 6 , 26 both gives 6 when divided by 10 this situation is known as situation of collision.
we cannot store the two values at same position.


Types of Hashing::
1.) Open Hashing(Closed Addressing).
2.) Closed Hashing(Open Addressing).

In Open Hashing method to resolve collsion is chaining method.
In closed hashing there are 3 techniques used to resolve collision which are as follows:-
1.) Linear Probing
2.) Quadratic Probing
3.) Double Hashing

Open Hashing::

1.) Chaining Method :: 
    Example :: 3,2,9,6,11,13,7,12 Use Division Method and closed addressing to store these values and the size of hash tabel is 10.
    Hash Function = 2*k+3;
    Key        Location
    3            (2*3+3)%10 = 9;
    2            (2*2+3)%10 = 7  
    6            (2*6+3)%10 = 5
    11           (2*11+3)%10 = 5
    here collision will be solved by chaining we create another linklist abd stored 11 there.


Closed Hashing ::

1.) Linear Probing Method ::
    Example :: 3,2,9,6,11,13,7,12 Use Division Method and closed addressing to store these values and the size of hash tabel is 10.
    Hash Function = 2*k+3;
    Key        Location
    3            (2*3+3)%10 = 9
    2            (2*2+3)%10 = 7  
    6            (2*6+3)%10 = 5
    11           (2*11+3)%10 = 5 etc.,
    In this we check(lineraly) the next place if it is empty then we can stored that element there.
    In this insert Ki at first free location from (u+i)%m where i ranges from 0 to m-1.
    for above example ::
    for 11, u = 5    i=0  (5+0)%10 = 5 which is already filled  (5+1)%10= 6 which is empty and we can insert 11 there.
    Simlarly for others.

    Basic Operations:

    1.) HashTable: This operation is used in order to create a new hash table.
    2.) Delete: This operation is used in order to delete a particular key-value pair from the hash table.
    3.) Get: This operation is used in order to search a key inside the hash table and return the value that is 
             associated with that key.
    4.) Put: This operation is used in order to insert a new key-value pair inside the hash table.
    5.) DeleteHashTable: This operation is used in order to delete the hash table
    
*/