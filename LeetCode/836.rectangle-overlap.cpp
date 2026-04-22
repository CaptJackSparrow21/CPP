/*
 * @lc app=leetcode id=836 lang=cpp
 *
 * [836] Rectangle Overlap
 */

// @lc code=start
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[2] <= rec2[0] ||        //left
           rec2[2] <= rec1[0] ||        //right
           rec1[3] <= rec2[1] ||        //below
           rec2[3] <= rec1[1] )  {      //above
            return false;
        }

        return true;
    }
};
// @lc code=end

