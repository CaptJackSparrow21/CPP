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

    vector<pair<int, int>> b(n);
    for(int i=0; i<n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> ans(n);
    int j = n - 1;

    for(auto [x, idx] : b)
        ans[idx] = a[j--];

    for(int x : ans)
        cout << x << ' ';

    return 0;
}