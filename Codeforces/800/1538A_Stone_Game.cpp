#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int minPos = min_element(a.begin(), a.end()) - a.begin();
        int maxPos = max_element(a.begin(), a.end()) - a.begin();

        int l = min(minPos, maxPos);
        int r = max(minPos, maxPos);

        int ans = min({ r + 1, n - l, (l+1) + (n-r) });

        cout << ans << endl;
    }

    return 0;
}