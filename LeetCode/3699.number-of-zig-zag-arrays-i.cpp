/*
 * @lc app=leetcode id=3699 lang=cpp
 *
 * [3699] Number of ZigZag Arrays I
 */

// @lc code=start
class Solution {
public:
    const int mod = 1e9+7;
    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;
        vector<int> dp(m, 1);

        for(int i=2; i<=n; i++) {
            reverse(dp.begin(), dp.end());
            int sum = 0;
            for(auto &d : dp)
                sum = (sum + exchange(d, sum)) % mod;
        }
        return ((accumulate(dp.begin(), dp.end(), 0LL) % mod) << 1) % mod;
    }
};
// @lc code=end

