#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int mn = abs(a[0]);
    for(int i=1; i<n; i++) {
        mn = min(mn, abs(a[i]));
    }

    cout << mn << endl;

    return 0;
}