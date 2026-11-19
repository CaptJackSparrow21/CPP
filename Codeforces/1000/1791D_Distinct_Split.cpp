#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> prefix(n), suffix(n);
        vector<int> freq(26, 0);

        int distinct = 0;

        for(int i=0; i<n; i++) {
            if(freq[s[i] - 'a'] == 0)
                distinct++;
            
            freq[s[i] - 'a']++;
            prefix[i] = distinct;
        }

        fill(freq.begin(), freq.end(), 0);
        distinct = 0;

        for(int i = n - 1; i>=0; i--) {
            if(freq[s[i] - 'a'] == 0)
                distinct++;

            freq[s[i] - 'a']++;
            suffix[i] = distinct;
        }

        int ans = 0;

        for(int i=0; i<n-1; i++)
            ans = max(ans, prefix[i] + suffix[i + 1]);

        cout << ans << '\n';
    }

    return 0;
}