/*
 * @lc app=leetcode id=3411 lang=cpp
 *
 * [3411] Maximum Subarray With Equal Products
 */

// @lc code=start
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int best = 2, left = 0, product = 1;
        for(int right=0; right<nums.size(); right++) {
            int x = nums[right];
            while(gcd(product, x) > 1)
                product /= nums[left++];
            product *= x;
            best = max(best, right - left + 1);
        }
        return best;
    }
};
// @lc code=end

