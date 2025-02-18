#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n, m, x;
    std::cin >> n >> m >> x;

    std::vector<int> dp(n);
    x--;
    dp[x] = 1;

    for (int i = 0; i < m; i++) {
        int r;
        char c;
        std::cin >> r >> c;
        std::vector<int> g(n);
        for (int j = 0; j < n; j++) {
            if (dp[j]) {
                if (c != '1') {
                    g[(j + r) % n] = 1;
                }
                if (c != '0') {
                    g[(j - r + n) % n] = 1;
                }
            }
        }
        dp = g;
    }

    int ans = std::count(dp.begin(), dp.end(), 1);
    std::cout << ans << "\n";
    for (int i = 0; i < n; i++) {
        if (dp[i]) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
