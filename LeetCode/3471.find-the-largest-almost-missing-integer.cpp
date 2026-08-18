/*
 * @lc app=leetcode id=3471 lang=cpp
 *
 * [3471] Find the Largest Almost Missing Integer
 */

// @lc code=start
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == k)
            return *max_element(nums.begin(), nums.end());

        if(k == 1) {
            int cnt[51] = {};
            for(int x : nums)
                cnt[x]++;

            int ans = -1;
            for(int x : nums)
                if(cnt[x] == 1)
                    ans = max(ans, x);

            return ans;
        }

        int ans = -1;

        if(count(nums.begin() + 1, nums.end(), nums[0]) == 0)
            ans = max(ans, nums[0]);

        if(count(nums.begin(), nums.end() - 1, nums[n-1]) == 0)
            ans = max(ans, nums[n-1]);

        return ans;
    }
};
// @lc code=end

