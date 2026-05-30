#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ans = 1;
        for(int i=1; i<=n; i++) {
            cout << ans;
            ans += 2;
            cout << ((i == n) ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}