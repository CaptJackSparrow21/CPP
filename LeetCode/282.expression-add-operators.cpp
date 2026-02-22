/*
 * @lc app=leetcode id=282 lang=cpp
 *
 * [282] Expression Add Operators
 */

// @lc code=start
class Solution {
public:
    vector<string> ans;

    vector<string> addOperators(string num, int target) {
        backtrack(num, target, 0, "", 0, 0);
        return ans;
    }

    void backtrack(string num, int target, int i, const string &path,
                long eval, long residual) {
        
        if(i == num.size()) {
            if(eval == target) {
                ans.push_back(path);
                return;
            }
        }

        string currStr = "";
        long nums = 0;

        for(int j=i; j<num.size(); j++) {
            if(j > i && num[i] == '0') return;
            currStr += num[j];
            nums = nums * 10 + num[j] - '0';

            if(i == 0) {
                backtrack(num, target, j+1, path + currStr, nums, nums);
            }
            else {
                //+
                backtrack(num, target, j+1, path + "+" + currStr,
                        eval + nums, nums);
                //-
                backtrack(num, target, j+1, path + "-" + currStr, 
                        eval - nums, -nums);
                //*
                backtrack(num, target, j+1, path + "*" + currStr,
                        eval - residual + residual * nums, residual * nums);
            }
        }
    }
};
// @lc code=end

