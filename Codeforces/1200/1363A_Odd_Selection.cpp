#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        
        int odd = 0, even = 0;
        for(int i=0; i<n; i++) {
            int a; cin >> a;

            if(a % 2) odd++;
            else even++;
        }

        bool ok = false;
        for(int i=1; i<=min(odd, x); i+=2) {
            if(x-i <= even) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}