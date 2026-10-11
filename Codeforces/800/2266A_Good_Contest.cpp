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
        int ans = 0;
        vector<int> a(3);
        for(int &i : a) cin >> i;
        int mn = *min_element(a.begin(), a.end());
        cout << n - mn << '\n';
    }

    return 0;
}