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
        string a, b;
        cin >> a;
        cin >> b;

        int i = 0, j = 0;
        while(i < n && j < m) {
            if(a[i] == b[j])
                i++;
            j++;
        }

        cout << i << '\n';
    }

    return 0;
}