#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int mn = 9;
        while (n > 0) {
            mn = min(mn, n % 10);
            n /= 10;
        }
        cout << mn << endl;
    }

    return 0;
}