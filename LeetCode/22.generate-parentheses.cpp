/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
    void backtrack(int n, int open, int close,
        string &curr, vector<string> &ans) {
        if((int)curr.size() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        if(open < n) {
            curr.push_back('(');
            backtrack(n, open + 1, close, curr, ans);
            curr.pop_back();
        }

        if(close < open) {
            curr.push_back(')');
            backtrack(n, open, close + 1, curr, ans);
            curr.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;
        backtrack(n, 0, 0, curr, ans);
        return ans;
    }
};
// @lc code=end

