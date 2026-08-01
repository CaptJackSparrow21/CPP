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

    vector<int> ans;
    unordered_set<int> seen;

    for(int i=n-1; i>=0; i--) {
        if(!seen.count(a[i])) {
            seen.insert(a[i]);
            ans.push_back(a[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << '\n';

    for(int x : ans)
        cout << x << ' ';


    return 0;
}