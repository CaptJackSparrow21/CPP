#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            cin >> a[i][j];
    }

    int x; cin >> x;

    bool ok = false;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i][j] == x) {
                ok = true;
                break;
            }
        }
    }

    cout << (ok ? "will not take number" : "will take number");

    return 0;
}