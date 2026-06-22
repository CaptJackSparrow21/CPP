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

        vector<int> freq(26, 0);
        for(char ch : s) 
            freq[ch - 'a']++;

        bool ok = false;

        for(int i=1; i<n-1; i++) {
            if(freq[s[i] - 'a'] >= 2) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}