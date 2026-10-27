/*
 * @lc app=leetcode id=3963 lang=cpp
 *
 * [3963] Create Grid With Exactly One Path
 */

// @lc code=start
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n - 1, '#') + '.');
        grid[0] = string(n, '.');
        return grid;
    }
};
// @lc code=end

