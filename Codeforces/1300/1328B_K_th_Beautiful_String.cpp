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

        string s(n, 'a');

        for(int i=n-2; i>=0; i--) {
            int cnt = n - i - 1;

            if(k <= cnt) {
                s[i] = 'b';
                s[n - k] = 'b';
                cout << s << '\n';
                break;
            }

            k -= cnt;
        }
    }

    return 0;
}