//https://takeuforward.org/practice/dsa/kmp-algorithm-or-lps-array

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    vector<int> search(string pat, string txt) {
        int n = txt.size(), m = pat.size();
        
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
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}