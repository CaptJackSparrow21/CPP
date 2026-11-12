#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n);

    int mx = 1, g = 0;

    for(int &x : a) {
        cin >> x;
        mx = max(mx, x);
        g = gcd(g, x);
    }

    vector<int> spf(mx + 1);

    for(int i=2; i<=mx; i++) {
        if(spf[i] == 0) {
            for(int j=i; j<=mx; j+=i) {
                if(spf[j] == 0)
                    spf[j] = i;
            }
        }
    }

    vector<bool> seen(mx + 1, false);
    bool pairwise = true;

    for(int x : a) {
        while(x > 1) {
            int p = spf[x];

            if(seen[p])
                pairwise = false;

            seen[p] = true;

            while(x % p == 0)
                x /= p;
        }
    }

    if(g > 1)
        cout << "not coprime\n";
    else if(pairwise)
        cout << "pairwise coprime\n";
    else 
        cout << "setwise coprime\n";

    return 0;
}