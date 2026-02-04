#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int d = s.size();
        int first_digit = s[0] - '0';
        int ans = 9 * (d - 1) + first_digit;
        cout << ans << endl;
    }

    return 0;
}