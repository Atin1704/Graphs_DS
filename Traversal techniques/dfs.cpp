#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfs(const vector<vector<int>> &adj, int node, vector<bool> &visited) {
    visited[node]=true;
    for(int x:adj[node]){
        if(visited[x]){
            continue;
        }
        else{
            dfs(adj,x,visited);
        }
    }
}