#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        ll sum = 0;
        for(int i=0; i<n; i++) {
            ll x;
            cin >> x;
            sum += x;
        }
        ll root = (ll) round(sqrt(sum));
        cout << (root * root == sum ? "YES" : "NO") << endl;
    }
    return 0;
}