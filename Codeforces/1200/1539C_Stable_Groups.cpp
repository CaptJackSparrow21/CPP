#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    vector<int> need;
    int groups = 1;
    for(int i=1; i<n; i++) {
        int gap = a[i] - a[i-1];

        if(gap > x) {
            groups++;
            need.push_back((gap - 1) / x);
        }
    }

    sort(need.begin(), need.end());
    for(int req : need) {
        if(k >= req) {
            k -= req;
            groups--;
        }
    }
    cout << groups;

    return 0;
}