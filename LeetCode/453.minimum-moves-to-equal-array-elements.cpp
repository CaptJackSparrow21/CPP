/*
 * @lc app=leetcode id=453 lang=cpp
 *
 * [453] Minimum Moves to Equal Array Elements
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0, mn = INT_MAX;
        for(int x : nums) {
            sum += x;
            mn = min(mn, x);
        }
        return sum - nums.size() * mn;
    }
};
// @lc code=end

