#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int plus = 0, minus = 0;
        for(char c : s) {
            if(c == '+') plus++;
            else minus++;
        }

        cout << abs(plus - minus) << '\n';
    }

    return 0;
}