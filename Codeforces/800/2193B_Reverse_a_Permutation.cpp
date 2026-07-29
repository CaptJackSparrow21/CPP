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

        int l = 0;

        while(l < n && a[l] == n - l)
            l++;

        if(l < n) {
            int r = max_element(a.begin() + l, a.end()) - a.begin();
            reverse(a.begin() + l, a.begin() + r + 1);
        }

        for(int x : a)
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}