/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i : nums)
            mp[i]++;

        vector<int> ans;

        for(auto [value, freq] : mp) {
            if(freq == 1)
                ans.push_back(value);
        }

        return ans;
    }
};
// @lc code=end

