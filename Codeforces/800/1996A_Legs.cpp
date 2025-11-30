#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n % 4 == 0) {
            cout << (n / 4) << endl;
        }
        else {
            cout << (n + 2) / 4 << endl;
        }
    }

    // int t; cin >> t;
    // while(t--) {
    //     int n; cin >> n;
    //     int ans = 0;

    //     while(n > 0) {
    //         if(n % 4 == 0) {
    //             ans += (n / 4);
    //             n -= n;
    //         }
    //         else {
    //             n -= 2;
    //             ans += 1;
    //         }
    //     }
    //     cout << ans << endl;
    // }

    return 0;
}