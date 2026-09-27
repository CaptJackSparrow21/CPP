/*
 * @lc app=leetcode id=132 lang=cpp
 *
 * [132] Palindrome Partitioning II
 */

// @lc code=start
class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<vector<bool>> pal(n, vector<bool> (n, false));
        vector<int> dp(n);

        for(int i=n-1; i>=0; i--) {
            for(int j=i; j<n; j++) {
                if(s[i] == s[j] && (j - i <= 2 || pal[i+1][j-1]))
                    pal[i][j] = true;
            }
        }

        for(int j=0; j<n; j++) {
            dp[j] = j;

            for(int i=0; i<=j; i++) {
                if(pal[i][j]) {
                    if(i == 0)
                        dp[j] = 0;
                    else 
                        dp[j] = min(dp[j], dp[i-1] + 1);
                }
            }
        }
        return dp[n-1];
    }
};
// @lc code=end

