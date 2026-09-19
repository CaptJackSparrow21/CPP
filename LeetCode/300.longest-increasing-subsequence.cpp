/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        for(int x : nums) {
            int idx = lower_bound(temp.begin(), temp.end(), x) - temp.begin();

            if(idx == temp.size())
                temp.push_back(x);
            else    
                temp[idx] = x;
        }
        return temp.size();
    }
};
// @lc code=end

