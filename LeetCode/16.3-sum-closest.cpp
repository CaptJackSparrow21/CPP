/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int closeSum = nums[0] + nums[1] + nums[2];
        for(int i=0; i<n-2; i++) {
            int l = i+1, r = n-1;
            while(l < r) {
                int currSum = nums[i] + nums[l] + nums[r];
                if(abs(currSum - target) < abs(closeSum - target)) {
                    closeSum = currSum;
                }

                if(currSum == target) {
                    return currSum;
                }
                else if(currSum < target) {
                    l++;
                }
                else {
                    r--;
                }
            }
        }
        return closeSum;
    }
};
// @lc code=end

