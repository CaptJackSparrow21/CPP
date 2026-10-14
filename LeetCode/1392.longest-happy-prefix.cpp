/*
 * @lc app=leetcode id=1392 lang=cpp
 *
 * [1392] Longest Happy Prefix
 */

// @lc code=start
class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        vector<int> pr(n, 0);

        for(int i=1; i<n; i++) {
            int j = pr[i - 1];

            while(j > 0 && s[i] != s[j])
                j = pr[j - 1];

            if(s[i] == s[j])
                j++;

            pr[i] = j;
        }
        return s.substr(0, pr[n - 1]);
    }
};
// @lc code=end

