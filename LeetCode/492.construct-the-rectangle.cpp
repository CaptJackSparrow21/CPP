/*
 * @lc app=leetcode id=492 lang=cpp
 *
 * [492] Construct the Rectangle
 */

// @lc code=start
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt((double)area);
        while(area % w != 0) w--;
        return {area / w, w};
    }
};
// @lc code=end

