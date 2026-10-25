#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    bool ans = false;
    sort(a.begin(), a.end());
    for(int i=1; i<n; i++) {
        if(a[i] > a[i - 1]) {
            ans = true;
            cout << a[i];
            break;
        }
    }

    cout << (ans ? "" : "NO");

    return 0;
}