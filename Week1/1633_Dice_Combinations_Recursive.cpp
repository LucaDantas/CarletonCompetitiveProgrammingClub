#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1000000 + 10, mod = 1000000007;

int dp[maxn];
bool mark[maxn];

int f(int n) {
    if(n == 0) return 1;
    if(n < 0) return 0;

    if(mark[n]) return dp[n];
    mark[n] = 1;

    int ans = 0;
    for(int i = 1; i <= 6; i++)
        ans += f(n-i), ans %= mod;

    dp[n] = ans;

    return ans;
}

int main() {
    int n; scanf("%d", &n);
    printf("%d\n", f(n));
}
