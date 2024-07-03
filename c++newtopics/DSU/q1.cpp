// Disjoint Set Union --> Union Find.
/*
Disjoint Set :- Sets with intersection NULL.

Opeation of DSU :-
1- Combine two given sets.
2- tell if two members belongs to same set or not.

We have leader of every set , and to combine them we will simply make the leader of the two sets same.
For finfing the members belongs to the same set or not we will find the leader of both the nodes.

Dry Code :- 

// this function will return the parent of a node.
int find(vector<int>& parent,int node){
    if(parent[node] == node) return node;
    return find(parent,parent[node]);
}

// for union
void union (vector<int>& parent,int node1,int node2){
    int p1 = find(parent,node1);
    int p2 = find(parent,node2);

    if(p1 != p2){
        parent[p2] = p1;  // chnage the parent of one node to combine them
    }
}

But this code for union increase the length/height of tree (cna lead to skew tree). 
So will see how to get the union using rank and path compression.

// find function will look like :-
// using path compression.
int find(vector<int>& parent,int node){
    if(parent[node] == node) return node;
    return parent[i] = find(parent,parent[node]);  // we are directly changing its parent to ultimate parent.
}

Using Rank and Path Compression.
If the rank is more it will become parent of another node. This will reduce the size of the tree.

// Now union code  will look like :-
void union(int node1, int node , vector<int>& parent,vector<int>& rank){
    int p1 = find(parent,node1);
    int p2 = find(parent,node2);
    if(p1 == p2) return;  // both belongs to the same set.
    if(rank[p1] > rank[p2]){
        parent[p2] =p1;
    }

    else if(rank[p1]<rank[p2]){
        parent[p1]=p2;
    }

    else{
        parent[p1] = p2;
        rank[p2]++;
    }
}
*/
