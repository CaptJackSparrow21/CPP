/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
    void dfs(int idx, vector<int> &nums, vector<int> &curr,
                vector<vector<int>> &ans) {
        ans.push_back(curr);
        for(int i=idx; i<nums.size(); i++) {
            if(i > idx && nums[i] == nums[i-1]) continue;
            curr.push_back(nums[i]);
            dfs(i+1, nums, curr, ans);
            curr.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(0, nums, curr, ans);
        return ans;
    }
};
// @lc code=end

