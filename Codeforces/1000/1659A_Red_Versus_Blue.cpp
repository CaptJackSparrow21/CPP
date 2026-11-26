#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, r, b;
        cin >> n >> r >> b;
        string s;

        int x = r / (b + 1);
        int rem = r % (b + 1);

        for(int i=0; i<=b; i++) {
            int cnt = x + (i < rem);

            s += string(cnt, 'R');

            if(i < b)
                s += 'B';
        }

        cout << s << '\n';
    }

    return 0;
}