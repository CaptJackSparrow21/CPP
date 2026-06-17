//https://takeuforward.org/graph/graph-representation-in-c

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //Adjacency Matrix
    //SC = O(n*n)
    int n, m;
    cin >> n >> m;
    int adj[n+1][n+1];
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; //this will removed in directed graph
    }

    //Adjacency Lists
    //SC = O(2 * E)  -----> undirected graph
    //SC = O(E)      -----> directed graph
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); //this will removed in directed graph
    }

    //Weighted graph representation in adjacency list we use
    vector< pair <int,int> > adjList[n+1];


    return 0;
}