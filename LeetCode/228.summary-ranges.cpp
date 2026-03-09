/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        for(int i=0; i<nums.size(); i++) {
            int start = nums[i];

            while(i+1 < nums.size() && nums[i]+1 == nums[i+1])
                i++;
            
            if(start == nums[i])
                ans.push_back(to_string(start));
            else 
                ans.push_back(to_string(start) + "->" + to_string(nums[i]));
        }
        return ans;
    }
};
// @lc code=end

