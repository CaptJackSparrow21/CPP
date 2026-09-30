#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int m; cin >> m;
    while(m--) {
        int x, y;
        cin >> x >> y;
        x--;

        int left = y - 1;
        int right = a[x] - y;

        if(x > 0)
            a[x - 1] += left;
        if(x + 1 < n)
            a[x + 1] += right;

        a[x] = 0;
    }

    for(int x : a)
        cout << x << '\n';

    return 0;
}