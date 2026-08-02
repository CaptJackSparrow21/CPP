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
    unordered_map<int, int> mp;
    for(int i : a)
        mp[i]++;

    int mx = 0;
    for(auto x : mp)
        mx = max(mx, x.second);

    cout << mx;
    return 0;
}