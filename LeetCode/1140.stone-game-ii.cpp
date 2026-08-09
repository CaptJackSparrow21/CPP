/*
 * @lc app=leetcode id=1140 lang=cpp
 *
 * [1140] Stone Game II
 */

// @lc code=start
class Solution {
public:
    int n;
    vector<int> suffix;
    vector<vector<int>> dp;

    int solve(int i, int m) {
        if(i == n)
            return 0;

        if(dp[i][m] != -1)
            return dp[i][m];

        int best = 0;

        for(int x=1; x<=2*m && i+x <= n; x++) {
            int nextM = max(m, x);
            int current = suffix[i] - solve(i + x, nextM);
            best = max(best, current);
        }
        return dp[i][m] = best;
    }

    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        suffix.assign(n+1, 0);
        for(int i=n-1; i>=0; i--) {
            suffix[i] = suffix[i+1] + piles[i];
        }

        dp.assign(n, vector<int> (n+1, -1));
        return solve(0, 1);
    }
};
// @lc code=end

