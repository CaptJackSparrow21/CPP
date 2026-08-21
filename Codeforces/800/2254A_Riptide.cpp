#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        vector<int> a(3);
        for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        cout << min(a[1] - a[0], a[2] - a[1]) << '\n';
    }

    return 0;
}