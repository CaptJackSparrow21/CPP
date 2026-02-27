#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        
        int x; cin >> x;
        int p1 = x % 2;
        int p2 = -1;

        bool ok = true;

        if(n >= 2) {
            cin >> x;
            p2  = x % 2;
        }

        for(int i=3; i<=n; i++) {
            cin >> x;
            int par = x % 2;

            if(i % 2 == 1) {
                if(par != p1) ok = false;
            }
            else {
                if(par != p2) ok = false;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}