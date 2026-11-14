/*
 * @lc app=leetcode id=3364 lang=cpp
 *
 * [3364] Minimum Positive Sum Subarray 
 */

// @lc code=start
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX, n = nums.size();
        for(int i=0; i<n; i++) {
            int sum = 0;
            for(int j=i; j<n; j++) {
                sum += nums[j];
                int len = j - i + 1;
                if(len >= l && len <= r && sum > 0)
                    ans = min(ans, sum);
            }
        }
        return (ans == INT_MAX ? -1 : ans);
    }
};
// @lc code=end

