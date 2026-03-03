#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    if(k == 0) cout << (a[0] == 1 ? -1 : 1);
    else {
        if(a[k-1] == a[k]) cout << -1;
        else cout << a[k-1];
    }

    return 0;
}