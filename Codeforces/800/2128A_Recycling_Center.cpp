    #include<bits/stdc++.h>
    using namespace std;
    #define int long long

    signed main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t; cin >> t;
        while(t--) {
            int n, c;
            cin >> n >> c;

            vector<int> a(n);
            for(int &i : a) cin >> i;
            int ans = 0;

            sort(a.rbegin(), a.rend());
            int j=0;
            for(int i=0; i<n; i++) {
                if(a[i] * (1 << j) <= c) {
                    ans++;
                    j++;
                }
            }
            cout << n - ans << '\n';
        }

        return 0;
    }