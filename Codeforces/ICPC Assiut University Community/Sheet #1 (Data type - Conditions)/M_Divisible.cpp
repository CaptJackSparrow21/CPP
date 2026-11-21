#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n; int x;
    cin >> n >> x;

    int rem = 0;

    for(char c : n) {
        int digit = c - '0';
        rem = (rem * 10 + digit) % x;
    }

    cout << (rem == 0 ? "YES" : "NO");

    return 0;
}