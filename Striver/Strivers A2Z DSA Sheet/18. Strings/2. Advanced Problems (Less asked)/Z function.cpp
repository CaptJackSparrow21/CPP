//https://takeuforward.org/practice/dsa/z-function

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n + m)
//n -> text len. && m -> pattern len.
class Solution {
public:
    vector<int> search(string text, string pattern) {
        string s = pattern + '$' + text;
        int n = s.size();
        vector<int> z(n, 0);
        int l = 0, r = 0;
        vector<int> ans;

        for(int i=1; i<n; i++) {
            if(i < r)
                z[i] = min(r - i, z[i - l]);

            while(i + z[i] < n && s[z[i]] == s[i + z[i]])
                z[i]++;

            if(i + z[i] > r) {
                l = i;
                r = i + z[i];
            }

            if(z[i] == (int)pattern.size() && i > (int)pattern.size()) 
                ans.push_back(i - pattern.size() - 1);
        }
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string text, pattern;
    cin >> text >> pattern;
    Solution sol;
    vector<int> ans = sol.search(text, pattern);

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << ' ';


    return 0;
}