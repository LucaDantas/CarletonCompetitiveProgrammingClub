#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1e6+10, mod = 1000000007;

int dp[maxn];

int main() {
    int n; scanf("%d", &n);
    dp[0] = 1; // there is one way to get the sum zero with dice throws, just don't do anything
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= 6 && i - j >= 0; j++)
            dp[i] = (dp[i] + dp[i-j]) % mod;
    printf("%d\n", dp[n]);
}
