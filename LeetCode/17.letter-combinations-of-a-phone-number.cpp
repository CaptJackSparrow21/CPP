/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> mapping = {
            "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> res;
        string path;
        function<void(int)> dfs = [&](int i) {
            if(i == (int) digits.size()) {
                res.push_back(path);
                return;
            }

            string &letters = mapping[digits[i] - '2'];
            for(char ch : letters) {
                path.push_back(ch);
                dfs(i+1);
                path.pop_back();
            }
        };
        dfs(0);
        return res;
    }
};
// @lc code=end

