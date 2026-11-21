#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;
    int q; cin >> q;

    int p = count(s.begin(), s.end(), '+');
    int m = n - p; 

    while(q--) {
        int a, b;
        cin >> a >> b;

        if(a == b) {
            cout << (p == m ? "YES\n" : "NO\n");
            continue;
        }

        if(a > b)
            swap(a, b);

        int d = b - a;
        int num = (m - p) * b;

        if(num % d != 0) {
            cout << "NO\n";
            continue;
        }

        int k = num / d;

        if(-p <= k && k <= m)   
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}