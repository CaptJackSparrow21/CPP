#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int a, b;

    while(t--) {
        cin >> a >> b;

        int diff = abs(a - b);
        int ans = (diff + 9) / 10;
        cout << ans << endl;
    }
    return 0;
}