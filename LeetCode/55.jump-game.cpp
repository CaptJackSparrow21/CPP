/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;

        for(int i=0; i<nums.size(); i++) {
            if(i > farthest)
                return false;
            
            farthest = max(farthest, i + nums[i]);
        }
        return true;
    }
};
// @lc code=end

