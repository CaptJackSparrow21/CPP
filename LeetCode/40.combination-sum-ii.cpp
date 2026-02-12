/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
    void dfs(int idx, int sum, int target, vector<int> &a,
                vector<int> &curr, vector<vector<int>> &ans) {
        if(sum == target) {
            ans.push_back(curr);
            return;
        }

        for(int i=idx; i<a.size(); i++) {
            if(i > idx && a[i] == a[i-1]) continue;
            if(sum + a[i] > target) break;
            curr.push_back(a[i]);
            dfs(i+1, sum + a[i], target, a, curr, ans);
            curr.pop_back();
        }
        
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(0, 0, target, candidates, curr, ans);

        return ans;
    }
};
// @lc code=end

