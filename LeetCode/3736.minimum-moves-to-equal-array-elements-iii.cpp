/*
 * @lc app=leetcode id=3736 lang=cpp
 *
 * [3736] Minimum Moves to Equal Array Elements III
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int mx = *max_element(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            ans += mx - nums[i];
        }
        return ans;
    }
};
// @lc code=end

