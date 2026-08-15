/*
 * @lc app=leetcode id=3702 lang=cpp
 *
 * [3702] Longest Subsequence With Non-Zero Bitwise XOR
 */

// @lc code=start
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorVal = 0, zero = 0;

        for(int i : nums) {
            xorVal ^= i;
            zero += (i == 0);
        }

        if(xorVal != 0)
            return nums.size();
        
        return (zero == nums.size() ? 0 : nums.size() - 1);
    }
};
// @lc code=end

