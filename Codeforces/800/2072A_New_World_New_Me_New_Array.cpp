#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if(abs(k) > n * p) cout << -1 << endl;
        else cout << (abs(k) + p - 1) / p << endl;
    }

    return 0;
}