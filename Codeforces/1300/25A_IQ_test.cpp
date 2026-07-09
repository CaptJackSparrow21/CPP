#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    int even = 0, odd = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];

        if(a[i] % 2) odd++;
        else even++;
    }

    if(even > odd) {
        for(int i=0; i<n; i++) {
            if(a[i] % 2) {
                cout << i + 1;
                break;
            }
        }
    }
    else {
        for(int i=0; i<n; i++) {
            if(a[i] % 2 == 0) {
                cout << i + 1;
                break;
            }
        }
    }

    return 0;
}