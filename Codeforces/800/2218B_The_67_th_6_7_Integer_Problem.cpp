#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        vector<int> a(7);
        int sum = 0;
        int mx = INT_MIN;

        for(int i=0; i<7; i++) {
            cin >> a[i];

            sum += a[i];
            mx = max(mx, a[i]);
        }
        cout << 2 * mx - sum << endl;
    }

    return 0;
}