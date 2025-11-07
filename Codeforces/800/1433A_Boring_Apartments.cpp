#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string x; cin >> x;
        int d = x[0] - '0';
        int len = x.size();
        int ans = 10 * (d-1);
        ans += (len * (len + 1)) / 2;   

        cout << ans << endl;
    }
    return 0;
}