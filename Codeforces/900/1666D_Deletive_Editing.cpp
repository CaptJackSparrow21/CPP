#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s, t;
        cin >> s >> t;

        vector<int> cnt(26, 0);

        for(char c : t)
            cnt[c - 'A']++;

        string ans;

        for(int i=s.size()-1; i>=0; i--) {
            if(cnt[s[i] - 'A'] > 0) {
                ans += s[i];
                cnt[s[i] - 'A']--;
            }
        }

        reverse(ans.begin(), ans.end());

        cout << (ans == t ? "YES\n" : "NO\n");
    }

    return 0;
}