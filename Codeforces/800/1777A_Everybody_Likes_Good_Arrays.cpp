#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        int ans = 0;
        for(int &x : a) cin >> x;

        for(int i=1; i<n; i++) {
            if((a[i] % 2) == a[i-1] % 2) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}