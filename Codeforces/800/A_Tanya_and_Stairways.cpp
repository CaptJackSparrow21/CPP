#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n), ans;
    for(int &i : a) cin >> i;

    int steps = 1;
    for(int i=1; i<n; i++) {
        if(a[i] == 1) {
            steps++;
            ans.push_back(a[i-1]);
        }
    }
    ans.push_back(a[n-1]);

    cout << steps << '\n';
    for(int i : ans)
        cout << i << ' ';

    return 0;
}