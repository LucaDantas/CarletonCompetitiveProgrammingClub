#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1e5+10; // always the number of vertices

// what we want to do is, for every vertex, save a vector containing
// all the neighbors of this edge, there are other ways to represent
// a graph but this is usually the most convenient for code

// vectors in c++ are dynamically allocated arrays
// that only use the necessary memory, it is efficient by ways of magic (doubling when needed)
vector<pair<int,int>> g[maxn]; // create an array of graphs

// how to traverse

void dfs(int u) {
    // old
    for(int i = 0; i < (int)(g[u].size()); i++) {
        int v = g[u][i].first, w = g[u][i].second;
    }
    // better
    for(pair<int,int> p : g[u]) {
        int v = p.first, w = p.second;
    }
    // more convenient but confusing
    for(auto [v, w] : g[u]) {

    }
}

int main() {
    int n, m; scanf("%d %d", &n, &m); // number of vertices and edges
    for(int i = 0; i < m; i++) { // watch out: for is until m, not n
        int a, b, w; scanf("%d %d %d", &a, &b, &w);
        g[a].push_back({b, w});
        g[b].push_back({a, w});
    }
}
