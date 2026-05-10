/*
 * @lc app=leetcode id=1030 lang=cpp
 *
 * [1030] Matrix Cells in Distance Order
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> ans;

        for(int r=0; r<rows; r++) {
            for(int c=0; c<cols; c++) {
                ans.push_back({r, c});
            }
        }

        sort(ans.begin(), ans.end(), [&] (vector<int> &a, vector<int> &b) {
            int d1 = abs(a[0] - rCenter) +
                     abs(a[1] - cCenter);

            int d2 = abs(b[0] - rCenter) +
                     abs(b[1] - cCenter);

            return d1 < d2;
        });

        return ans;
    }
};
// @lc code=end

