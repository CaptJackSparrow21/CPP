#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        int mx = *max_element(a.begin(), a.end());
        int sum = accumulate(a.begin(), a.end(), 0);

        cout << ((mx <= (sum + 1) / 2) ? "YES\n" : "NO\n");
    }

    return 0;
}