/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    int cnt1(int n) {
        int cnt = 0;

        while(n) {
            n = n & (n - 1);
            cnt++;
        }
        return cnt;
    }

    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++) {
            ans.push_back(cnt1(i));
        }
        return ans;
    }
};
// @lc code=end

