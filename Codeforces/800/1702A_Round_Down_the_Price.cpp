#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;

        ll n = s.size();
        ll num = stoi(s);
        ll ans = num - pow(10, n-1);
        cout << ans << endl;
    }

    return 0;
}