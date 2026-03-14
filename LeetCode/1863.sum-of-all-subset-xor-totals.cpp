/*
 * @lc app=leetcode id=1863 lang=cpp
 *
 * [1863] Sum of All Subset XOR Totals
 */

// @lc code=start
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int OR = 0;
        for(int i : nums) {
            OR |= i;
        }

        return OR * (1 << (nums.size() - 1)); 
    }
};
// @lc code=end

