#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    sort(s.begin(), s.end());

    vector<string> ans;
    do {
        ans.push_back(s);
    }
    while(next_permutation(s.begin(), s.end()));

    cout << ans.size() << '\n';
    for(const string &x : ans)
        cout << x << '\n';

    return 0;
}