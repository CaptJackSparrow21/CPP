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
        vector<int> a(n);
        for(int &i : a) cin >> i;

        int total = 0;
        for(int i=1; i<n; i++)
            total += abs(a[i] - a[i-1]);

        int save = max(abs(a[1] - a[0]),
                        abs(a[n-1] - a[n-2]));

        for(int i=1; i<n-1; i++) {
            int curr = abs(a[i] - a[i-1]) + abs(a[i+1] - a[i])
                        - abs(a[i+1] - a[i-1]);

            save = max(save, curr);
        }
        cout << total - save << '\n';
    }

    return 0;
}