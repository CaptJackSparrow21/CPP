#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int x = max({a, b, c});
        int need = (x - a) + (x - b) + (x - c);
        if(need > n) {
            cout << "NO\n";
        }
        else {
            int left = n - need;
            if(left % 3 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}