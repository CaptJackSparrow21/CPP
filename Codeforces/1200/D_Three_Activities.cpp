#include<bits/stdc++.h>
using namespace std;
#define int long long

void update(vector<pair<int, int>> &v, int val, int idx) {
    v.push_back({val, idx});
    sort(v.rbegin(), v.rend());

    if(v.size() > 3)
        v.pop_back();
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n), c(n);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        for(int &i : c) cin >> i;

        vector<pair<int, int>> A, B, C;

        for(int i=0; i<n; i++) {
            update(A, a[i], i);
            update(B, b[i], i);
            update(C, c[i], i);
        }

        int ans = 0;

        for(auto x : A) {
            for(auto y : B) {
                for(auto z : C) {
                    if(x.second != y.second &&
                       y.second != z.second &&
                       x.second != z.second) {
                            ans = max(ans, x.first + y.first + z.first);
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}