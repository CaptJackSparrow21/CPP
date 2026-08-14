#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = 0;
    for(int i=0; i<m; i++) {
        if(a[i] >= 0)
            break;
        ans += abs(a[i]);
    }
    cout << ans;

    return 0;
}