/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> a(n+1);
        a[0] = 0;
        for(int i=1; i<n+1; i++) {
            a[i] = a[i-1] + gain[i-1];
        }

        int ans = *max_element(a.begin(), a.end());
        return ans;
    }
};
// @lc code=end

