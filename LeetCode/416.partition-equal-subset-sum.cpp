/*
 * @lc app=leetcode id=416 lang=cpp
 *
 * [416] Partition Equal Subset Sum
 */

// @lc code=start
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % 2)
            return false;

        int target = sum / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for(int x : nums) {
            for(int j=target; j>=x; j--)    
                dp[j] = dp[j] || dp[j-x];
        }
        return dp[target];
    }
};
// @lc code=end

