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
        int sum = 0;
        for(int &i : a) {
            cin >> i;
            sum += i;
        }

        sort(a.rbegin(), a.rend());

        int combo = sum / 2;
        int killed = 0, attacks = 0;

        for(int i=0; i<n && killed < combo; i++) {
            killed += a[i];
            attacks++;
        }

        cout << sum - combo + attacks << '\n';
    }

    return 0;
}