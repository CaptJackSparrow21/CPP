#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, s, r;
        cin >> n >> s >> r;
        int mx = s - r;
        vector<int> ans(n-1, 1);
        int rem = r - (n - 1);
        for(int i=0; i<n-1 && rem > 0; i++) {
            int add = min(rem, mx - 1);
            ans[i] += add;
            rem -= add;
        }

        ans.push_back(mx);

        for(int x : ans)
            cout << x << ' ';

        cout << '\n';
    }

    return 0;
}