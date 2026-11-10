#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int l = 0, r = n - 1;
    int mn = 1, mx = n;

    while(l <= r) {
        if(a[l] == mn) {
            l++;
            mn++;
        }
        else if(a[l] == mx) {
            l++;
            mx--;
        }
        else if(a[r] == mn) {
            r--;
            mn++;
        }
        else if(a[r] == mx) {
            r--;
            mx--;
        }
        else {
            cout << l + 1 << " " << r + 1 << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) 
        solve();

    return 0;
}