/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);

        for(int i=1; i<intervals.size(); i++) {
            vector<int> &curr = intervals[i];
            vector<int> &last = ans.back();

            if(curr[0] <= last[1])
                last[1] = max(last[1], curr[1]);
            else 
                ans.push_back(curr);
        }
        return ans;
    }
};
// @lc code=end

