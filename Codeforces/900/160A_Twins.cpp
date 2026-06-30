#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int total = 0, ans = 0;
    vector<int> a;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        total += x;
        a.push_back(x);
    }

    sort(a.rbegin(), a.rend());
    int coins = 0, i = 0;
    while(coins <= (total / 2)) {
        ans++;
        coins += a[i];
        i++;
    }
    cout << ans;

    return 0;
}