/*
 * @lc app=leetcode id=1840 lang=cpp
 *
 * [1840] Maximum Building Height
 */

// @lc code=start
class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        vector<vector<int>> r = restrictions;
        r.push_back({1, 0});

        sort(r.begin(), r.end());
        int sz = r.size();

        for(int i=1; i<sz; i++)
            r[i][1] = yCap(r[i-1], r[i]);

        for(int i=sz-2; i>=0; i--)
            r[i][1] = yCap(r[i+1], r[i]);

        int res = 0;
        for(int i=1; i<sz; i++)
            res = max(res, yPeak(r[i-1], r[i]));

        return max(res, r[sz-1][1] + n - r[sz - 1][0]);
    }

    int yCap(vector<int> &l, vector<int> &r) {
        int x1 = l[0], y1 = l[1], x2 = r[0], y2 = r[1];
        return min(y2, y1 + abs(x2 - x1));
    }

    int yPeak(vector<int> &l, vector<int> &r) {
        int x1 = l[0], y1 = l[1], x2 = r[0], y2 = r[1];
        return (y1 + y2 + x2 - x1) >> 1;
    }
};
// @lc code=end

