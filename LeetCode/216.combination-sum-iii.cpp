/*
 * @lc app=leetcode id=216 lang=cpp
 *
 * [216] Combination Sum III
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> combo;

    void backtrack(int start, int k, int target) {
        if(combo.size() == k && target == 0) {
            ans.push_back(combo);
            return;
        }

        if(combo.size() > k || target < 0) return;
        for(int num=start; num<=9; num++) {
            combo.push_back(num);
            backtrack(num+1, k, target-num);
            combo.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
       
        backtrack(1, k, n);
        return ans;
    }
};
// @lc code=end

