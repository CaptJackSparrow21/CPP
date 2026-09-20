/*
 * @lc app=leetcode id=2035 lang=cpp
 *
 * [2035] Partition Array Into Two Arrays to Minimize Sum Difference
 */

// @lc code=start
class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 2, total = 0, ans = INT_MAX;

        for(int x : nums)
            total += x;

        vector<vector<int>> left(n + 1), right(n + 1);
        for(int mask=0; mask < (1 << n); mask++) {
            int cnt = 0, s1 = 0, s2 = 0;
            for(int i=0; i<n; i++) {
                if(mask & (1 << i)) {
                    cnt++;
                    s1 += nums[i];
                    s2 += nums[i + n];
                }
            }
            left[cnt].push_back(s1);
            right[cnt].push_back(s2);
        }

        for(auto &v : right)
            sort(v.begin(), v.end());
        
        for(int cnt=0; cnt<=n; cnt++) {
            for(int x : left[cnt]) {
                int target = total / 2 - x;
                auto it = lower_bound(right[n - cnt].begin(), right[n - cnt].end(), target);

                if(it != right[n - cnt].end())
                    ans = min(ans, abs(total - 2 * (x + *it)));

                if(it != right[n - cnt].begin()) {
                    --it;
                    ans = min(ans, abs(total - 2 * (x + *it)));
                }
            }
        }
        return ans;
    }
};
// @lc code=end

