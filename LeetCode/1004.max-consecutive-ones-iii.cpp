/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, zeros = 0, ans = 0;

        for(int r=0; r<nums.size(); r++) {
            if(nums[r] == 0) zeros++;

            if(zeros > k) {
                if(nums[l] == 0) zeros--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
// @lc code=end

