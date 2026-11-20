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
        vector<int> a(n), b(n), pref(n + 1, 0);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;

        for(int i=0; i<n; i++) 
            pref[i + 1] = pref[i] + b[i];

        vector<int> cnt(n + 1, 0), add(n + 1, 0);

        for(int i=0; i<n; i++) {
            int j = upper_bound(pref.begin(), pref.end(),
                            a[i] + pref[i]) - pref.begin() - 1;

            cnt[i]++;
            cnt[j]--;

            add[j] += a[i] - (pref[j] - pref[i]);
        }

        for(int i=0; i<n; i++) {
            if(i > 0)
                cnt[i] += cnt[i - 1];

            cout << cnt[i] * b[i] + add[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}