/*
 * @lc app=leetcode id=10 lang=cpp
 *
 * [10] Regular Expression Matching
 */

// @lc code=start

//https://alexanderobregon.substack.com/p/leetcode-10-regular-expression-matching
// TC = SC = O(mn)
class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
        dp[m][n] = true;

        for(int i=m; i>=0; i--) {
            for(int j=n-1; j>=0; j--) {
                bool first_match = (i < m) && (s[i] == p[j] || p[j] == '.');
                if(j+1 < n && p[j+1] == '*') {
                    dp[i][j] = dp[i][j+2] || (first_match && dp[i+1][j]);
                }
                else {
                    dp[i][j] = first_match &&  dp[i+1][j+1];
                }
            }
        }
        return dp[0][0];
    }
};
// @lc code=end

