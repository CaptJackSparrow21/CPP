/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;

        for(auto interval : intervals) {
            if(interval[1] < newInterval[0])
                ans.push_back(interval);
            else if(interval[0] > newInterval[1]) {
                ans.push_back(newInterval);
                newInterval = interval;
            }
            else {
                newInterval[0] = min(interval[0], newInterval[0]);
                newInterval[1] = max(interval[1], newInterval[1]);
            }
        }
        ans.push_back(newInterval);
        return ans;
    }
};
// @lc code=end

