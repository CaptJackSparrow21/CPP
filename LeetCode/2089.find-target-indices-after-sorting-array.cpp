/*
 * @lc app=leetcode id=2089 lang=cpp
 *
 * [2089] Find Target Indices After Sorting Array
 */

// @lc code=start
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == target)
                ans.push_back(i);
        }
        return ans;
    }
};
// @lc code=end

