#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    vector<int> a(n);
    for(int &i : a) cin >> i;
    int maxA = *max_element(a.begin(), a.end());

    vector<int> freq(maxA + 1, 0);
    vector<bool> bad(maxA + 1, false);

    for(int x : a) 
        freq[x]++;

    for(int i=1; i<=maxA; i++) {
        if(freq[i] > 0) {
            for(int j=2*i; j<=maxA; j+=i)
                bad[j] = true;
        }
    }

    int ans = 0;
    for(int i=1; i<=maxA; i++) {
        if(freq[i] == 1 && !bad[i])
            ans++;
    }

    cout << ans << '\n';

    return 0;
}