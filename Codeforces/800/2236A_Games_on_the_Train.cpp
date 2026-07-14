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
        int mn = *min_element(a.begin(), a.end());

        cout << (mx + 1) - mn << '\n';
    }

    return 0;
}