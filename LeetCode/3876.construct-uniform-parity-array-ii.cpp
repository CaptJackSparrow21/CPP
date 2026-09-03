/*
 * @lc app=leetcode id=3876 lang=cpp
 *
 * [3876] Construct Uniform Parity Array II
 */

// @lc code=start
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallestOdd = INT_MAX;
        for(int num : nums1) {
            if(num % 2 == 1)
                smallestOdd = min(smallestOdd, num);
        }

        if(smallestOdd == INT_MAX)
            return true;

        for(int num : nums1) {
            if(num % 2 == 0 && num < smallestOdd)
                return false;
        }
        return true;
    }
};
// @lc code=end

