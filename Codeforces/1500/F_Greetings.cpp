#include<bits/stdc++.h>
using namespace std;
#define int long long

struct Fenwick {
    int n;
    vector<int> bit;

    Fenwick(int n) {
        this->n = n;
        bit.assign(n + 1, 0);
    }

    void update(int i, int val) {
        while(i <= n) {
            bit[i] += val;
            i += i & -i;
        }
    }

    int query(int i) {
        int sum = 0;
        while(i > 0) {
            sum += bit[i];
            i -= i & -i;
        }
        return sum;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<pair<int, int>> v(n);
        vector<int> b;

        for(int i=0; i<n; i++) {
            cin >> v[i].first >> v[i].second;
            b.push_back(v[i].second);
        }

        sort(v.begin(), v.end());
        sort(b.begin(), b.end());

        Fenwick fw(n);

        int ans = 0, processed = 0;

        for(auto [a, dest] : v) {
            int idx = lower_bound(b.begin(), b.end(), dest) - b.begin() + 1;
            ans += processed - fw.query(idx);
            fw.update(idx, 1);
            processed++;
        }

        cout << ans << '\n';
    }

    return 0;
}