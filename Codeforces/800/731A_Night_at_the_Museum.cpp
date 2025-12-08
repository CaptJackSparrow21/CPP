#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    char current = 'a';
    int ans = 0;
    for(char c : s) {
        int diff = abs(c - current);
        ans += min(diff, 26 - diff);
        current = c;
    }

    cout << ans << endl;

    return 0;
}