#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m), gaps;
        for(int &i : a) cin >> i;

        sort(a.begin(), a.end());

        for(int i=0; i<m-1; i++)
            gaps.push_back(a[i + 1] - a[i] - 1);

        gaps.push_back(a[0] + n - a[m-1] - 1);

        sort(gaps.rbegin(), gaps.rend());

        int days = 0, saved = 0;

        for(int gap : gaps) {
            int rem = gap - 2 * days;

            if(rem <= 0)
                continue;

            if(rem <= 2) {
                saved++;
                days++;
            }
            else {
                saved += rem - 1;
                days += 2;
            }
        }

        cout << n - saved << '\n';

    }

    return 0;
}