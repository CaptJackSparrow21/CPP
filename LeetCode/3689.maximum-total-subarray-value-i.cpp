/*
 * @lc app=leetcode id=3689 lang=cpp
 *
 * [3689] Maximum Total Subarray Value I
 */

// @lc code=start
#define ll long long
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        ll x = *max_element(nums.begin(), nums.end());
        ll y = *min_element(nums.begin(), nums.end());

        return k * (x - y);
    }
};
// @lc code=end

