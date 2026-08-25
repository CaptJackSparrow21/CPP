#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        for(int i=0; i<n; i++) {
            for(char c='a'; c<'a' + k; c++)
                cout << c;
        }
        cout << '\n';
    }

    return 0;
}