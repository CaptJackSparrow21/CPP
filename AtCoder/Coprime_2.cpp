#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int maxA = *max_element(a.begin(), a.end());

    vector<bool> bad(m + 1, false);
    vector<bool> used(maxA + 1, false);

    for(int x : a) {
        for(int p=2; p*p<=x; p++) {
            if(x % p == 0) {
                if(!used[p]) {
                    used[p] = true;

                    for(int j=p; j<=m; j+=p)
                        bad[j] = true;
                }

                while(x % p == 0)
                    x /= p;
            }
        }

        if(x > 1 && !used[x]) {
            used[x] = true;

            for(int j=x; j<=m; j+=x)
                bad[j] = true;
        }
    }

    vector<int> ans;

    for(int k=1; k<=m; k++) {
        if(!bad[k])
            ans.push_back(k);
    }

    cout << ans.size() << '\n';
    for(int x : ans)
        cout << x << '\n';
        
    return 0;
}