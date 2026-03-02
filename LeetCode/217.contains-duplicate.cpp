/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums) {
            if(seen.count(num)) return true;    
            seen.insert(num);
        }
        return false;  

        // sort(nums.begin(), nums.end());
        // for(int i=1; i<nums.size(); i++) {
        //     if(nums[i] == nums[i-1]) return true;
        // }
        // return false;
    }
};
// @lc code=end

