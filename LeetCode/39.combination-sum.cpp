/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
    void dfs(int i, int target, vector<int> &candidates,
             vector<int> &curr, vector<vector<int>> &ans) {
        if(target == 0) {
            ans.push_back(curr);
            return;
        }

        if(i == candidates.size() || target < 0) return;
        curr.push_back(candidates[i]);
        dfs(i, target - candidates[i], candidates, curr, ans);
        curr.pop_back();

        dfs(i + 1, target, candidates, curr, ans);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(0, target, candidates, curr, ans);
        return ans;
    }
};
// @lc code=end

