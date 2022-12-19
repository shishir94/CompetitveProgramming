// What is Pointer?-----> data types which holds the address of other data types.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int a = 3;
    int* b =&a; 
    // & -----> (address of) operator.
    cout<<"The address of a is "<<&a;
    cout<<endl;
    cout<<"The address of a is "<<b;  // b is a pointer which stores the address of a
    cout<<endl;
    // * -----> value at dereference operator.
    cout<<"The value at address b is "<<*b<<endl;;

    // Pointers to pointer
    int** c = &b;
    cout<<"The value at address b is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;;
   

return 0;
}

// Another example ::
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a = 10;
int *aptr;
aptr = &a;   // aptr stores th address of integer a
cout<<&a<<" "<<aptr<<endl;   // both gives the same output.
cout<<*aptr<<endl;    // defrence of pointer. it prints the value stored in integer a.

// we can also directly change the value of interger a without using it (with the help of *aptr).
*aptr = 20;
cout<<a<<endl;


return 0; 
}