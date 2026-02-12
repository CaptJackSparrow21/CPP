/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        //fix first no. of quadruple
        for(int i=0; i<n-3; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue;

            //fix second no.
            for(int j=i+1; j<n-2; j++) {
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int left = j+1; //start pointer for third no.
                int right = n-1; //end pointer for 4th no.

                //finding remaining two no.
                while(left < right) {
                    long long sum = (long long) nums[i] + nums[j] + nums[left] + nums[right];
                    if(sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        while(left < right && nums[left] == nums[left+1]) left++;
                        left++;
                        while(left < right && nums[right] == nums[right-1]) right--;
                        right--;
                    }
                    else if(sum < target) left++;
                    else right--;
                }
            }
        }
        return result;
    }
};
// @lc code=end

