/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#define ll long long
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for(int i=0; i<n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            if(nums[i] > 0) break;

            int l = i+1, r = n-1;
            while(l < r) {
                ll sum = (ll)nums[i] + nums[l] + nums[r];
                if(sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++; r--;
                    while(l < r && nums[l] == nums[l-1]) l++;
                    while(l < r && nums[r] == nums[r+1]) r--;
                }
                else if(sum < 0)  l++;
                else r--;
            }
        }
        return ans;
    }
};
// @lc code=end

