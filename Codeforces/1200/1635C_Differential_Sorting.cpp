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
        for(int &i : a) cin >> i;

        if(a[n - 2] > a[n - 1])
            cout << -1 << '\n';
        else if(a[n - 1] < 0) {
            if(is_sorted(a.begin(), a.end()))
                cout << 0 << '\n';
            else 
                cout << -1 << '\n';
        }
        else {
            cout << n - 2 << '\n';
            for(int i=0; i<n-2; i++)
                cout << i + 1 << " " << n - 1 << " " << n << '\n';
        }
    }

    return 0;
}