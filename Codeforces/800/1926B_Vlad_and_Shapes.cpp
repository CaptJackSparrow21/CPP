#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool ok = false;
        for(int i=0; i<n; i++) {
            string s; cin >> s;
            if(count(s.begin(), s.end(), '1') == 1)
                ok = true;
        }

        cout << (ok ? "TRIANGLE\n" : "SQUARE\n");
    }

    return 0;
}