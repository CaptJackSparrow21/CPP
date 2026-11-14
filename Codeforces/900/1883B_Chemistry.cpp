#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s; cin >> s;

        vector<int> freq(26, 0);

        for(char c : s)
            freq[c - 'a']++;

        int odd = 0;

        for(int x : freq)
            if(x % 2)
                odd++;

        // cout << (odd <= k + 1 ? "YES\n" : "NO\n");
        cout << (odd - k <= 1 ? "YES\n" : "NO\n");
    }

    return 0;
}