// // Pointers and Arrays
// /*
// int arr[] = {10,20,30,40};
// */

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int arr[] = {10,20,30,40};
// cout<<*arr<<endl; // print the zeroth element.

// int *ptr = arr;
// for(int i=0;i<4;i++){
//     cout<<*ptr<<endl;
//     ptr++;
// }
// for(int i=0;i<4;i++){
//     cout<<*(arr+i)<<endl;
//  //   arr++; // wrong expression
// }
// return 0;
// }

// // Pointer to Pointer
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int a = 10;
// int* aptr = &a;
// cout<<*aptr<<endl;   // prints the value of a.
// cout<<aptr<<endl;
// int **q = &aptr;
// cout<<q<<endl;        // prints the address of pointer aptr.
// cout<<*q<<endl;      // prints the value of aptr.
// cout<<**q<<endl;    // prints the value of a. (defrencing)

// return 0;
// }


// Passing Pointers to a function::
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void increment(int a){
//     a++;
// }
// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int a = 2;
// increment(a);   // value of a is not modified it will print 2.
// // here comes the use of pointers
// cout<<a<<endl;
// return 0;
// }

// Pass by reference::
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void swap(int *a,int *b){
//     int temp =*a;
//     *a=*b;
//     *b =temp;
// }

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int a = 2;
// int b =4;
// swap(a,b);
// cout<<a<<" "<<b<<endl;   // no swaping is done.
// int *aptr = &a;
// int *btr = &b;
// swap(aptr,btr);  // using pointers
// cout<<a<<" "<<b<<endl;
// swap(&a,&b);   // using address
// cout<<a<<" "<<b<<endl;
// return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void increment(int *a){
    ++*a;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a = 2;
increment(&a);   
cout<<a<<endl;
return 0;
}

// 2 dimensional array 
/*
int nums[2][3]  =  { { 16, 18, 20 }, { 25, 26, 27 } };
nums[ i ][ j ] ==  *(*(nums+i)+j) 
notation of pointer are::
*(*(nums))  = nums[0][0] = 16
*(*(nums+1)) = nums[0][1] = 18
*(*(nums+1)) = nums[1][0] = 25
*(*(nums+1)+1) = nums[1][1] = 26 etc.

*/