/*
QUEUE :: First Come First Out.
In queue we will insert from the last inserted element and delete the element from the first element.

Queue as an abstract data-type ::
DATA :: 1. Storage
        2. Pointers for insertion end and deletion end.

METHODS :: 1. enqueue :: to insert element in queue
           2. dequeue :: to delete element from queue.
           3. first val
           4. last val
           5. peak(pos)
           6. isempty()/isfull()

NOTE :: Queue is not only limited to counters. 
It can be implemented  in various ways
1. Using arrays.
2. Using Linkedlist
3. Using other ADTs

Time complexity is O(1) = linear.

Important Functions ::

1. size() = returns the size of the queue.
2. front() = returns the first element of queue.
3. back() = returns the last element of queue.
4. pop() = removes the first element.
5. push() = Adds the element in the queue.
6. empty = returns true if the queue is empty.
7. swap() = Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.

*/