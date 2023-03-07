// Dirceted Acyclic Graph means no directed cycle is present.
// We have to find the shortest path between the nodes in weighted dircted acyclic graph.
/*
let's take an example ::

0 ---> 1 === 5
0 ---> 2 === 3
1 ---> 3 === 6
1 ---> 2 === 2
2 ---> 3 === 7
2 ---> 5 === 2
2 ---> 4 === 4
3 ---> 4 === -1
4 ---> 5 === -2

Now let's find out the shortest path to reach each and every node from node 1.
1--->0 INF
1---1  0
1--->2 2
1--->3 6
1--->4 5
1--->5 3

Array = [Inf , 0 , 2 , 6 , 5 , 3]

Now lets talk about approach::
Algorithm :: 1) Sabse phele topological sort nikal lo ess se pata chal jayeaga ki hume phele node ke baad kis node par jana h.
2). Uske baad ek distance naam ki ek array bana lo. Topological sort ek stack me store hoga uske har ek top ko 
access karo or waha se minimum path nikalo.

*/