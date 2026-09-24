/*
 * @lc app=leetcode id=3550 lang=cpp
 *
 * [3550] Smallest Index With Digit Sum Equal to Index
 */

// @lc code=start
class Solution {
public:
    int sum(int n) {
        int ans = 0;
        while(n > 0) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {
            if(i == sum(nums[i]))
                return i;
        }
        return -1;
    }
};
// @lc code=end

