// We can only increment , decrement , add , subtract with the pointers


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a = 10;
int* aptr = &a;
cout<<aptr<<endl;  // address of integer a .let us suppose that it will print 2000.
aptr++;
cout<<aptr<<endl;  // it will print 2004 not 2001.
// // Reason :: We know that integer value takes 4 bytes thus it will go to next memory location after leaving the size of the 
// //            integer.
char ch  = 'a';
char *cptr = &ch;
cout<<cptr<<endl;
cptr++;
cout<<cptr<<endl;

return 0;
}


