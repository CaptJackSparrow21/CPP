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

        vector<int> cnt(k, 0);
        for(int i=0; i<n; i++) {
            if(s[i] == '1')
                cnt[i % k]++;
        }

        bool possible = true;

        for(int x : cnt) {
            if(x % 2) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}