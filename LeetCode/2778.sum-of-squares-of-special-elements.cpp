/*
 * @lc app=leetcode id=2778 lang=cpp
 *
 * [2778] Sum of Squares of Special Elements 
 */

// @lc code=start
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(n % (i+1) == 0)
                ans.push_back(nums[i]);
        }

        int sum = 0;
        for(int i=0; i<ans.size(); i++) {
            sum += ans[i] * ans[i];
        }

        return sum;
    }
};
// @lc code=end

