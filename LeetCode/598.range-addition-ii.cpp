/*
 * @lc app=leetcode id=598 lang=cpp
 *
 * [598] Range Addition II
 */

// @lc code=start
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty()) return m * n;

        int minRow = m, minCol = n;
        for(auto &op : ops) {
            minRow = min(minRow, op[0]);
            minCol = min(minCol, op[1]);
        }
        return minRow * minCol;
    }
};
// @lc code=end

