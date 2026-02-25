#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int mx = max({a, b, c});
        int aw = max(0, max(b,c) + 1 - a);
        int bw = max(0, max(a,c) + 1 - b);
        int cw = max(0, max(a,b) + 1 - c);

        cout << aw << " " << bw << " " << cw << endl;
    }

    return 0;
}