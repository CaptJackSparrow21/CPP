/*
 * @lc app=leetcode id=1851 lang=cpp
 *
 * [1851] Minimum Interval to Include Each Query
 */

// @lc code=start
class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
            > pq;

        vector<int> sortQ = queries;
        sort(sortQ.begin(), sortQ.end());
        sort(intervals.begin(), intervals.end());

        unordered_map<int, int> ans;

        int i = 0;
        int n = intervals
        .size();

        for(int q : sortQ) {
            while(i < n && intervals[i][0] <= q) {
                int left = intervals[i][0];
                int right = intervals[i][1];

                int length = right - left + 1;

                pq.push({length, right});
                i++;
            }

            while(!pq.empty() && pq.top().second < q)
                pq.pop();

            if(pq.empty())
                ans[q] = -1;
            else    
                ans[q] = pq.top().first;
        }

        vector<int> result;
        for(int q : queries)
            result.push_back(ans[q]);

        return result;
    }
};
// @lc code=end

