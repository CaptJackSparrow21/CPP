    #include<bits/stdc++.h>
    using namespace std;
    #define int long long

    signed main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t; cin >> t;
        while(t--) {
            int x, y;
            cin >> x >> y;
            int ans = ((x - 1) / 10) - ((y - 1) / 10);
            cout << abs(ans) << '\n';
        }

        return 0;
    }