/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value,index
        for(int i=0; i<nums.size(); i++) {
            int need = target - nums[i];
            if(mp.find(need) != mp.end()) {
                // we can also write only if(mp.count(need))
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

