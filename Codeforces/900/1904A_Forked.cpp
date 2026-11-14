#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        int xk, yk, xq, yq;
        cin >> xk >> yk;
        cin >> xq >> yq;

        int dx[] = {-1, 1, -1, 1};
        int dy[] = {-1, -1, 1, 1};

        set<pair<int, int>> s1, s2;

        for(int i=0; i<4; i++) {
            s1.insert({xk + dx[i] * a, yk + dy[i] * b});
            s1.insert({xk + dx[i] * b, yk + dy[i] * a});

            s2.insert({xq + dx[i] * a, yq + dy[i] * b});
            s2.insert({xq + dx[i] * b, yq + dy[i] * a});
        }

        int ans = 0;

        for(auto p : s1) {
            if(s2.count(p))
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}