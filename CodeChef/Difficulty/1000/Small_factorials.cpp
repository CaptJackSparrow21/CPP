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
        vector<int> fact(1, 1);

        for(int i=2; i<=n; i++) {
            int carry = 0;

            for(int j=0; j<fact.size(); j++) {
                int x = fact[j] * i + carry;
                fact[j] = x % 10;
                carry = x / 10;
            }

            while(carry) {
                fact.push_back(carry % 10);
                carry /= 10;
            }
        }

        for(int i=fact.size() - 1; i>=0; i--)
            cout << fact[i];

        cout << '\n';
    }

    return 0;
}