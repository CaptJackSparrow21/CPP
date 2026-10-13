//https://takeuforward.org/practice/dsa/kmp-algorithm-or-lps-array

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n + m) && SC = O(m)
class Solution {
public:
    vector<int> search(string pat, string txt) {
        int n = txt.size(), m = pat.size();
        vector<int> lps(m, 0), ans;

        for(int i=1, len = 0; i<m; ) {
            if(pat[i] == pat[len])
                lps[i++] = ++len;
            else if(len > 0)
                len = lps[len - 1];
            else 
                lps[i++] = 0;
        }

        for(int i=0, j=0; i<n; ) {
            if(txt[i] == pat[j]) {
                i++;
                j++;
            }

            if(j == m) {
                ans.push_back(i - j);
                j = lps[j - 1];
            }
            else if(i < n && txt[i] != pat[j]) {
                if(j > 0)
                    j = lps[j - 1];
                else 
                    i++;
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
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}