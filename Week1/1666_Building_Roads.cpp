#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1e5+10;

vector<int> g[maxn];

bool mark[maxn];

void dfs(int u) {
    mark[u] = 1;
    for(int v : g[u])
        if(!mark[v])
            dfs(v);
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b); // same as cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> components;

    for(int i = 1; i <= n; i++) {
        if(!mark[i]) {
            dfs(i);
            components.push_back(i);
        }
    }
    
    printf("%d\n", (int)(components.size()) - 1);
    for(int i = 1; i < (int)(components.size()); i++)
        printf("%d %d\n", components[i-1], components[i]);
}
