#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(const vector<vector<int>> &adj, int starting_node, vector<bool> &visited) {
    if (starting_node < 0 || starting_node >= adj.size()) {
        return;
    }

    queue<int> bfs_queue;
    bfs_queue.push(starting_node);
    visited[starting_node] = true;

    while (!bfs_queue.empty()) {
        int node = bfs_queue.front();
        cout << node << " ";
        bfs_queue.pop();

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                bfs_queue.push(neighbor);
                visited[neighbor] = true; 
            }
        }
    }
}