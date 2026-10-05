//https://takeuforward.org/practice/dsa/rabin-karp-algorithm

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * m) && SC = O(k)
class Solution {
#define ll long long
public:
    vector<int> search(string pat, string txt) {
        const ll base = 256;
        const ll mod = 1e9 + 7;
        int n = txt.size(), m = pat.size();
        vector<int> ans;
        if(m > n)
            return ans;
        ll pHash = 0, tHash = 0, power = 1;

        for(int i=0; i<m; i++) {
            pHash = (pHash * base + pat[i]) % mod;
            tHash = (tHash * base + txt[i]) % mod;

            if(i < m - 1)
                power = power * base % mod;
        }

        for(int i=0; i<=n-m; i++) {
            if(pHash == tHash && txt.compare(i, m, pat) == 0)
                ans.push_back(i);

            if(i < n - m) {
                tHash = (tHash - txt[i] * power % mod + mod) % mod;
                tHash = (tHash * base + txt[i + m]) % mod;
            }
        }
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string txt, pat;
    cin >> txt >> pat;
    Solution sol;
    vector<int> ans = sol.search(pat, txt);
    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i + 1 < ans.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}