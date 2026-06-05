#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if(abs(a-b) % 2 == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}