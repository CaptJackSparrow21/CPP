#include<bits/stdc++.h>
using namespace std;
#define int long long

int sum(int n, int k) {
    int m = (n - 1) / k;
    return k * m * (m + 1) / 2;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << sum(n, 3) + sum(n, 5) - sum(n, 15) << '\n';
    }
    
    return 0;
    
}
