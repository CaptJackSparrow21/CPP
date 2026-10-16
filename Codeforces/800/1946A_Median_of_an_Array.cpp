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
        sort(a.begin(), a.end());
        int mid = (n - 1) / 2;
        int ans = 0;
        for(int i=mid; i<n && a[i] == a[mid]; i++)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}