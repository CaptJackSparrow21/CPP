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
        vector<int> x(n), y(n), diff(n);
        for(int &i : x) cin >> i;
        for(int &i : y) cin >> i;

        for(int i=0; i<n; i++)
            diff[i] = y[i] - x[i];

        sort(diff.begin(), diff.end());

        int l = 0, r = n - 1, cnt = 0;

        while(l < r) {
            if(diff[l] + diff[r] >= 0) {
                cnt++;
                l++;
                r--;
            }
            else 
                l++;
        }
        cout << cnt << '\n';
    }

    return 0;
}