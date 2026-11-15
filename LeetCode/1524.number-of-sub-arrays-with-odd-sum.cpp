/*
 * @lc app=leetcode id=1524 lang=cpp
 *
 * [1524] Number of Sub-arrays With Odd Sum
 */

// @lc code=start
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod = 1e9 + 7;
        int even = 1, odd = 0;
        long long ans = 0;
        int sum = 0;

        for(int x : arr) {
            sum = (sum + x) % 2;

            if(sum == 1) {
                ans = (ans + even) % mod;
                odd++;
            }
            else {
                ans = (ans + odd) % mod;
                even++;
            }
        }
        return ans;
    }
};
// @lc code=end

