/*
 * @lc app=leetcode id=1477 lang=cpp
 *
 * [1477] Find Two Non-overlapping Sub-arrays Each With Target Sum
 */

// @lc code=start
class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int res = n + 1, sum = 0, i = 0;

        vector<int> dp(n + 1, n);
        for(int j=0; j<n; j++) {
            sum += arr[j];

            while(sum > target)
                sum -= arr[i++];

            dp[j + 1] = dp[j];

            if(sum == target) {
                res = min(res, j - i + 1 + dp[i]);
                dp[j + 1] = min(dp[j], j - i + 1);
            }
        }
        return res == n + 1 ? -1 : res;
    }
};
// @lc code=end

