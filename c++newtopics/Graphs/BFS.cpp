// Breadth First Search 
/*
Graph traversal refers to the process of visiting (checking and/or updating) each vertex (node) in a graph.
Two algorithm of graph traversal are ::
--- Breadth first search.
--- Depth first search.

In BFS we start with a node and start exploring its connected nodes. The same process is repeated with all the connecting 
nodes until all the nodes are visited.
*/

// how to implement BFS for any graph ::
/*
METHOD 1 ::
1) BFS Spanning Tree :: 
Try to make a tree using graph and any  source node as a root then we will make all the sideways and duplicte edges dashed and
used level order traversal.

METHOD 2::
1)BFS Traversal::
We will start with any source node and insert it in a queue then we will visit all the coonected vertices and enqueue them for
exploration.
*/

// CODE OF BFS ::

// Important Note :: Time complexity of below code is O(v+e) number of vertices plus number of edges.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v; // Number of vertices
    vector<list<int>>adj; // pointer to the array containing adjacency lits.
    
public:
    Graph(int v);  // constructor
    void addEdge(int v,int w); // function to add an edge to a graph.
    void BFS(int s);  //print BFS traversal from a given source.

};


Graph::Graph(int v){
    this->v=v;
    adj.resize(v);
}


void Graph::addEdge(int v , int w){
    adj[v].push_back(w); // add w to v's lists.
}

void Graph :: BFS(int s){
    vector<bool>visited;  // mark all the vertices as not visited.
    visited.resize(v,false);

    list<int>queue; // create a queue for BFS

    visited[s]=true;
    queue.push_back(s);
    while(!queue.empty()){
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();
        for(auto x:adj[s]){
            if(!visited[x]){
                visited[x]=true;
                queue.push_back(x);
            }
        }
    }

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Graph g(4);
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 2);
g.addEdge(2, 0);
g.addEdge(2, 3);
g.addEdge(3, 3);
cout << "Following is Breadth First Traversal "<< "(starting from vertex 2) \n";
g.BFS(2);
return 0;
}