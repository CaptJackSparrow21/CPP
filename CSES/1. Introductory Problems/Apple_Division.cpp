#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long total = 0;

    for (auto &x : a) {
        cin >> x;
        total += x;
    }

    int limit = 1 << n;
    vector<long long> sum(limit, 0);
    long long ans = LLONG_MAX;

    for (int mask = 1; mask < limit; mask++) {
        int bit = __builtin_ctz(mask);
        int prev = mask & (mask - 1);

        sum[mask] = sum[prev] + a[bit];
        ans = min(ans, abs(total - 2 * sum[mask]));
    }

    ans = min(ans, total);  // Empty subset
    cout << ans << '\n';

    return 0;
}
