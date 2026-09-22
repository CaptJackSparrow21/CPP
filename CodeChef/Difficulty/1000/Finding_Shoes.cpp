#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int left = 0;
        if(m > n)
            left = n;
        else
            left = m;

        cout << (2 * n) - left << '\n';
    }

    return 0;
}