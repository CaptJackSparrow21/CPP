#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q; cin >> q;
    while(q--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        int sum = accumulate(a.begin(), a.end(), 0);
        cout << (sum + n - 1) / n << '\n';
    }

    return 0;
}