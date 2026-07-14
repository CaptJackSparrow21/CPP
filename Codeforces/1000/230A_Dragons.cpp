#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++) 
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    bool flag = true;

    for(int i=0; i<n; i++) {
        if(s > a[i].first)
            s += a[i].second;
        else {
            flag = false;
        }
    }
    
    cout << (flag ? "YES" : "NO");

    return 0;
}