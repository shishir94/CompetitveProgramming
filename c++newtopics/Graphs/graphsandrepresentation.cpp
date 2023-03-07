// Graphs representation 
/*
There is an ordered pair (u,v) called as edges which means that u is connected to v .(u,v) is an ordered pair as (u,v) is not 
equal to (v,u) is case of directed graph.
*/

// Code for Adjacency matrix
/*
It consumes more spaces O(v*v) where v are the number of vertices.
*/

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
//     int n,m;  // n is number of vertices and m is number of edges.
//     cin>>n>>m;
//     int arr[n+1][m+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         arr[u][v]=1;
//         arr[v][u]=1;
//     }
// }
// return 0;
// }


// CODE FOR ADJACENCEY LIST ::
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v) {
		cout << "\n Adjacency list of vertex " << v
			<< "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}
int main()
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printGraph(adj, V);
	return 0;
}


