#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;

        int l = INT_MAX, r = INT_MIN;

        for(int i=0; i<n; i++) {
            int d;
            cin >> d;

            if(d == 1) {
                l = min(l, i);
                r = max(r, i);
            }
        }

        cout << (x >= r - l + 1 ? "YES\n" : "NO\n");
    }

    return 0;
}