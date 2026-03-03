/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int ans = nums[0];
        for(int i=1; i<nums.size(); i++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
// @lc code=end

