//https://takeuforward.org/practice/dsa/rabin-karp-algorithm

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
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
            pHash = (pHash * base + )
        }
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