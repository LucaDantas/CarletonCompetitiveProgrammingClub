#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1e3+10; // always the number of vertices

// what we want to do is, for every vertex, save a vector containing
// all the neighbors of this edge, there are other ways to represent
// a graph but this is usually the most convenient for code

// vectors in c++ are dynamically allocated arrays
// that only use the necessary memory, it is efficient by ways of magic (doubling when needed)
int matrix[maxn][maxn];

// how to traverse


int main() {
    int n, m; scanf("%d %d", &n, &m); // number of vertices and edges
    for(int i = 0; i < m; i++) { // watch out: for is until m, not n
        int a, b; scanf("%d %d", &a, &b);
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
}
