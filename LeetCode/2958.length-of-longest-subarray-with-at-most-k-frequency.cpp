/*
 * @lc app=leetcode id=2958 lang=cpp
 *
 * [2958] Length of Longest Subarray With at Most K Frequency
 */

// @lc code=start
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0, ans = 0;
        for(int right=0; right<nums.size(); right++) {
            freq[nums[right]]++;
            while(freq[nums[right]] > k)
                freq[nums[left++]]--;

            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
// @lc code=end

