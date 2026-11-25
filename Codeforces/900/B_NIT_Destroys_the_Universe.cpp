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
        int first = -1, last = -1;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] != 0) {
                if(first == -1)
                    first = i;

                last = i;
            }
        }

        if(first == -1) {
            cout << 0 << '\n';
            continue;
        }

        bool zero = false;

        for(int i=first; i<=last; i++) {
            if(a[i] == 0) {
                zero = true;
                break;
            }
        }

        cout << (zero ? 2 : 1)
    }

    return 0;
}