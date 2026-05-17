#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        int mx = *max_element(a.begin(), a.end());

        cout << (k > 1 || a[j-1] == mx ? "YES\n" : "NO\n");
    }

    return 0;
}