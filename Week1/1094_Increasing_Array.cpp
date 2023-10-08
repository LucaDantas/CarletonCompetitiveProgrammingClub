#include<iostream>
using namespace std;
 
const int N = 200005;
 
int n, a[N];
unsigned long long ans = 0;
int curMax = 0;
 
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > curMax) {
            curMax = a[i];
        } else {
            ans += curMax - a[i];
        }
    }
    cout << ans << ' ';
}