#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, d;
    cin >> n >> d;

    vector<int> p(n);
    for(int &i : p) cin >> i;

    sort(p.begin(), p.end());

    int l = 0, r = n - 1, ans = 0;

    while(l <= r) {
        int cnt = (d / p[r]) + 1;
        if(r - l + 1 < cnt)
            break;

        ans++;
        l += cnt - 1;
        r--;
    }

    cout << ans;

    return 0;
}