/*
Important example :: Suppose there is a city and there are so many hosiptal in this city and there is doctor which is doing 
full body checkup and let's suppose that there are 5 beds in a hospital(H1) which are left blank on which doctor will check the 
patients. Numbering of the beds as follows _: 0 1 2 3 4. Suddenly the beds are very less in the hospital (H1) as compare to
the patients who wants their checkup. Then doctor gives advice that there are vacant beds in many hospital like H2(2 bed left)
H1(1 bed left),H3(2 bed),H4(2). and he can check them there and keep the address of another bed with you. In other we are 
linking all the patients by creating chain.
This is known as linked lists(replacement of array).
*/
/*
Now lets start with an array of integers.
We can store the array like int arr[30] and we get this array in the form of stacks.
for dynamic memory allocation we used : int* ptr = (int*)malloc(n*n size) by using this we get the memory in the heaps
and we can use this memory.
In c++, we use new and delete for allocation and deallocation of memory.
Hum array ko limited array ka hi bana sakte h agar hume uski capacity badani h to hume ek new array banani padegi or uske 
elements ko copy karna padega.

In linked list we have nodes having two spaces one for data and other for the pointer pointing to the next memory location.
For adding next element remove the null and add another node in the linked list.
Insertion and deletion is very easy in linked list. In array it is very difficult to insert another element as element 
in array are stored in contiguous manner.
In array we can access address of any element directly whereas in linked list we have to pass through each and every node.
in other way we have to traverse whole linked list.
For deletion linked list is has advantage over array , in array if we want to delete an element we have to shift all the
element and same for the insertion process .And also insertion is done in the array if there is a space in it.

In the linked list we are using extra memory for pointer(stroing the address of next data)
*/