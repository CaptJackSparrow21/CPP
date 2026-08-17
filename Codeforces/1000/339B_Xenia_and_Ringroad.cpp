#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, curr = 1, ans = 0;
    cin >> n >> m;
    while(m--) {
        int target; 
        cin >> target;

        ans += (target - curr + n) % n;
        curr = target;
    }

    cout << ans << '\n';

    return 0;
}