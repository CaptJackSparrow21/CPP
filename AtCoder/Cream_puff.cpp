#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a;
    for(int i=1; i*i<=n; i++) {
        if(n % i == 0) {
            a.push_back(i);
            if(i != n/i)
                a.push_back(n/i);
        }
    }

    sort(a.begin(), a.end());
    for(int i : a)
        cout << i << '\n';

    return 0;
}