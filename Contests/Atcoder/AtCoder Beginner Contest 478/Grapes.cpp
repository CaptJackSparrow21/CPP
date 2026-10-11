#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(n, 0);
    int grapes = 1;
    while(m > 0) {
        for(int i=0; i<n; i++) {
            a[i] += grapes;
            m -= grapes;
            if(m == 0)
                break;
        }
    }

    for(int i : a)
        cout << i << '\n';

    return 0;
}