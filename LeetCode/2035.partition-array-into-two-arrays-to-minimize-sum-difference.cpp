/*
 * @lc app=leetcode id=2035 lang=cpp
 *
 * [2035] Partition Array Into Two Arrays to Minimize Sum Difference
 */

// @lc code=start
class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        vector<bool> dp(total + 1, false);
        dp[0] = true;

        for(int x : nums) {
            for(int s = total; s >= x; s--)
                dp[s] = dp[s] || dp[s-x];
        }

        for(int s=total/2; s>=0; s--)
            if(dp[s])
                return total - 2 * s;

        return total;
    }
};
// @lc code=end

