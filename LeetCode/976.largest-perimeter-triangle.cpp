/*
 * @lc app=leetcode id=976 lang=cpp
 *
 * [976] Largest Perimeter Triangle
 */

// @lc code=start
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int n = nums.size();
        
        for(int i=0; i<n-2; i++) {
            int a = nums[i];
            int b = nums[i+1];
            int c = nums[i+2];

            if(b + c > a)
                return a + b + c;
        }
        return 0;
    }
};
// @lc code=end

