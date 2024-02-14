/*
Helps in finding the shortest path from source to all the nodes just like dijasktra. But dijasktra fails when cost is negative
or there is negative cycle.Dijasktra will give time limit exceed.
Bellman Ford Algorithm works for directed graph.For undirected graph we have to convert undirected graph into directed graph
and hence we can use this algorithm in any garph.

What is negative cycle ?
Suppose there is a graph  1---> 2 ---> 3 ---> 1. with edge cost -2,-1 and 2 respectively. In this path sum is -1 and we apply 
dijaskta it keeps on going and gives TIME LIMIT EXCEED.

CODE :- Distance from the Source (Bellman-Ford Algorithm) --> GFG question.
*/