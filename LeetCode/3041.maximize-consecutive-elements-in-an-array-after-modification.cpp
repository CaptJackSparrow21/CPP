/*
 * @lc app=leetcode id=3041 lang=cpp
 *
 * [3041] Maximize Consecutive Elements in an Array After Modification
 */

// @lc code=start
class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int ans = 0;
        for(int num : nums) {
            mp[num + 1] = mp[num] + 1;
            mp[num] = mp[num - 1] + 1;
            ans = max({ans, mp[num], mp[num + 1]});
        }
        return ans;
    }
};
// @lc code=end

