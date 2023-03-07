// GRAPHS INTRODUCTION :: 

// WHAT ARE GRAPHS ?
/*
Graphs are non linear data structure consisting of vertices and edges where are vertices are also known as nodes and edes are 
known as lines or arcs that connects any two nodes in graphs. Graph are represented as G(E,V).
*/


// COPMPONENTS OF GRAPHS::
/*
1) VERTICES :: Somtimes also known as nodes or vertex.They can be labelled or unlabelled.

2) EDGES :: Used to connect two nodes or vertex of the graph . they can connect nodes in any possible way. They are also known
         as arcs. They can be labelled or unlabelled.

Example of Graphs :: 
In the below graphs 5 ,3 ,1 etc are nodes or vertices and line connecting 2 and 6 etc are known as edges.

            5----->3
                  / \
                 /  \
                /   |
               4    1
               \    /
               \   /
               \  /
                 2 -----> 6     
*/


// TYPES OF GRAPHS ::

/*
1) NULL GRAPH :: No edges in the graph. 
            example ::  5    4     3     2

2) TRIVIAL  GRAPH :: Having only one vertex also the smallest graph possible.
            example :: 7

3) UNDIRECTED GRAPH :: Graph in which edges do not have any direction.
            example  ::  3 ---- 5 
                         |      |
                         |      |
                         |      |
                         1------4

4) DIRECTED GRAPH :: Egdes have a direction.

5) REGULAR GRAPH :: the graph in which each vertex degree of each vertex is equal to k is called k regular graph.
    where degree is defined as a number of edges from a particular vertex.

6) COMPLETE GRAPH :: The graph in which from each node there is an edge to each other node.

7) CYCLE GRAPH :: The graph in which the graph is a cycle in itself in other words the degree of each vertex is 2.

8) CYCLIC GRAPH :: A graph containing atleat one cycle.

9) BIPARTITE GRAPH :: A graph in which vertex can be divided into two sets such that vertex in each set does not contain 
                    any edge between them.

*/


// TREE VS GRAPS ::
/*
Trees are the parts of graphs having certain restrictions. Every tree will always be a graph but not all graphs are tree.
*/


// REPRESENTATION OF GRAPHS ::
/*
There are two ways to store graphs ::
1) Adjacency matrix --- > we create a 2-d matrix having rows and columns denoting the vertices.Each entry in the matrix 
            represents the weight of the edge between those vertices.

2) Adjacency list---> This graph is represented as a collection of linked lists. There is an array of pointer which 
            points to the edges connected to that vertex

*/

// COMPRASION OF TIME COMPLEXITY BETWEEN ADJACENECY MATRIX AND ADJACENECY LISTS.
/*
                            ADJACENECY MATRIX               ADJACENECY LISTS
ADDING EDGE                      O(1)                           O(1)
REMOVING AND EGGE                O(1)                           O(N)
INITIALIZING                     O(N*N)                         O(N)

*/