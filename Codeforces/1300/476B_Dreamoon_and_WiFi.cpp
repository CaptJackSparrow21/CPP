#include<bits/stdc++.h>
using namespace std;
#define int long long

int ncr(int n, int r) {
    if(r < 0 || r > n) return 0;
    int ans = 1;
    for(int i=1; i<=r; i++)
        ans = ans * (n - i + 1) / i;
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    int target = 0, curr = 0, q = 0;
    for(char c : s1)
        target += (c == '+' ? 1 : -1);

    for(char c : s2) {
        if(c == '+') curr++;
        else if(c == '-') curr--;
        else q++;
    }

    int d = target - curr;
    int x = (q + d) / 2;

    if((q + d) % 2 || x < 0 || x > q) {
        cout << fixed << setprecision(12) << 0.0;
        return 0;
    }

    double ans = (double)ncr(q, x) / (1 << q);
    cout << fixed << setprecision(12) << ans;

    return 0;
}