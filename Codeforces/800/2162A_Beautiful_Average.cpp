#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int mx = 0;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;

            mx = max(mx, x);
        }

        cout << mx << endl;
    }

    return 0;
}