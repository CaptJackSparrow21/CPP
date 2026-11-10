#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> d(n-1);
    for(int &i : d) cin >> i;
    d.insert(d.begin(), 0);

    int a, b;
    cin >> a >> b;

    int ans = 0;
    for(int i=a; i<b; i++) {
        ans += d[i];
    }
    cout << ans << '\n';

    return 0;
}