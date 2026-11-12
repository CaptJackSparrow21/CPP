/*
 * @lc app=leetcode id=3105 lang=cpp
 *
 * [3105] Longest Strictly Increasing or Strictly Decreasing Subarray
 */

// @lc code=start
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int best = 1, up = 1, down = 1;
        for(int i=1; i<nums.size(); i++) {
            up = nums[i-1] < nums[i] ? up + 1 : 1;
            down = nums[i-1] > nums[i] ? down + 1: 1;
            best = max({best, up, down});
        }
        return best;
    }
};
// @lc code=end

