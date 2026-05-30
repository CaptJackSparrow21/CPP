/*
 * @lc app=leetcode id=1232 lang=cpp
 *
 * [1232] Check If It Is a Straight Line
 */

// @lc code=start
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];

        for(int i=2; i<coordinates.size(); i++) {
            int x = coordinates[i][0];
            int y = coordinates[i][1];

            if((long long)(x - x1) * (y2 - y1) !=
                (long long)(y - y1) * (x2 - x1)) {
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end

