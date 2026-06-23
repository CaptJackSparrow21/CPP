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
        int odd = 1, even = 2;
        for(int i=0; i<n/2; i++) {
            a[i] = even;
            even += 2;
        }

        for(int i=n-1; i>=n/2; i--) {
            a[i] = odd;
            odd += 2;
        }

        for(int i=0; i<n; i++) {
            cout << a[i];
            if(i+1 != n)
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}